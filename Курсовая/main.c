#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "temp_functions.h"

// Глобальные переменные
_Bool check_error = false, error_text = true;
char file_name[256];
int a;
int y, m, d, h, mi, t;
int rez, nm, check;
FILE *f;
struct temperature month[12] = {0};
union u union_month = {0};

// Основная программа 
int main(int argc, char *argv[]) {

    // Вывод вводной информации
    print_info(); 
    
    // Обработка ключей программы
    check = scan_keys(argc, argv, file_name, union_month, rez, nm);
    
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
    print_stats(month, check);
    
    return 0;
}