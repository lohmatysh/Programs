#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "temp_functions.h"

// Глобальные переменные
_Bool check_month, check_year, check_error = false, error_text = true;
char file_name[256];
int a;
int y, m, d, h, mi, t;
int rez, nm;
FILE *f;
struct temperature month[12] = {0};
union u union_month = {0};

// Основная программа 
int main(int argc, char *argv[]) {

    // Вывод вводной информации
    print_info(); 
    
    // Обработка ключей программы
    while ((rez = getopt(argc, argv, "hf:m:")) != -1) {
        switch(rez) {
            case 'h': printf("Set of supported keys by the application:\n\
                -h Description of the application functionality. List of keys that handles the given application and their purpose.\n\
                -f <filename.csv> input csv file to process.\n\
                -m <month number> if this key is given, then output only statistics for the specified month.\n"); break;
            case 'f': strcpy(file_name, optarg);
                print_space();
                printf("Input csv file to process: %s\n", file_name);
                check_year = true; break;
            case 'm': strcpy(union_month.ch, optarg);
                print_space();
                switch(union_month.i) {
                    case 49: nm = 1; break;
                    case 50: nm = 2; break;
                    case 51: nm = 3; break;
                    case 52: nm = 4; break;
                    case 53: nm = 5; break;
                    case 54: nm = 6; break;
                    case 55: nm = 7; break;
                    case 56: nm = 8; break;
                    case 57: nm = 9; break;
                    case 12337: nm = 10; break;
                    case 12593: nm = 11; break;
                    case 12849: nm = 12; break;
                }
                printf("Current month: %d\n", nm); 
                check_month = true; break;
            case '?': print_space(); 
                printf("Error found! No such key %s exists. Try -h for help.\n", argv[optind-1]); break;
        }
    }
    
    // Считывание данных из файла
    f = fopen(file_name, "r");
    while ((a = (fscanf(f, "%d; %d; %d; %d; %d; %d", &y, &m, &d, &h, &mi, &t))) != EOF) {
        if (a != 6) {
            check_error = true;
            if (check_error && error_text) {
                print_space();
                printf("Error list\n");
                check_error = false;
                error_text = false;
            }
            char error[100] = {0};
            fscanf(f, "%[^\n]", error);
            fprintf(stderr, "Error string: %s\n", error);
        } else {
            //printf("Ok string: %d; %d; %d; %d; %d; %d\n", y, m, d, h, mi, t);
            month[m].info.year = y;
            month[m].info.day = d;
            month[m].info.month = m;
            month[m].info.hour = h;
            month[m].info.min = mi;
            month[m].min_t = min_value(month, m, t);
            month[m].max_t = max_value(month, m, t);
            month[m].sum += t;
            month[m].count++;
        }
    }
    fclose(f);

    // Вывод данных
    if (check_month == true) {
        print_space();
        printf("Stats per a choosen month\n"); 
        printf("Average = %0.2f Min = %d Max = %d Count = %ld\n", average_value(month, nm), month[nm].min_t, month[nm].max_t, month[nm].count);
        print_space();
    }
    else if (check_year) {
        print_space();
        printf("Stats per each month\n");
        for (int i = 1; i <= 12; i++) {
            printf("Month %d Average = %0.2f Min = %d Max = %d Count = %ld\n", i, average_value(month, i), month[i].min_t, month[i].max_t, month[i].count);
        }
        print_space();
        printf("Stats per a year\n");
        printf("Average = %0.2f Min = %d Max = %d\n", average_value_year(month), min_value_year(month), max_value_year(month));
        print_space();
    }

    return 0;
}