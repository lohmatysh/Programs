#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

// Структуры и объединения
struct data {
    int year, month, day, hour, min, t;
};

struct temperature {
    struct data info;
    int max_t;
    int min_t;
    long signed int count;
    long signed int sum;
} month[12] = {0};

union u {
    char ch[256];
    int i;
} union_month = {0};

// Объявление функций
float average_value(struct temperature* month, int n);
int max_value(struct temperature* month, int n, int t);
int min_value(struct temperature* month, int n, int t);
float average_value_year(struct temperature* month);
int max_value_year(struct temperature* month);
int min_value_year(struct temperature* month);
void print_space();
void print_info();
void print_stats(struct temperature* month, _Bool ischeck_month, _Bool ischeck_year);
void data_scan(struct temperature* month, FILE *f, int y, int m, int d, int h, int mi, int t);
void keys_scan(int argc, char *argv[]);

// Глобальные переменные
_Bool check_month = false, check_year = false;
char file_name[256];
int a, y, m, d, h, mi, t, rez = 0, nm = 0;
FILE *f;

// Основная программа 
int main(int argc, char *argv[]) {
    print_info(); // Вывод вводной информации
    keys_scan(argc, argv); // Обработка ключей программы
    data_scan(month, f, y, m, d, h, mi, t); // Считывание данных из файла
    print_stats(month, check_month, check_year); // Вывод данных
    return 0;
}

// Функции
float average_value(struct temperature* month, int n) {
    long signed int sum_f = month[n].sum, count_f = month[n].count;
    float average_f = 0.0;
    average_f = sum_f / count_f;
    if (average_f == 0.0) {
        return 0.0;
    }
    else {
        return average_f;
    }
}

int max_value(struct temperature* month, int n, int t) {
    int max_f;
    if (month[n].count != 0) {
        max_f = month[n].max_t;
    }
    else {
        max_f = -100;
    }
    if (t > max_f) {
        max_f = t;
    }
    return max_f; 
}

int min_value(struct temperature* month, int n, int t) {
    int min_f;
    if (month[n].count != 0) {
        min_f = month[n].min_t;
    }
    else {
        min_f = 100;
    }
    if (t < min_f) {
        min_f = t;
    }
    return min_f; 
}

float average_value_year(struct temperature* month) {
    float sum_year = 0, count_year = 12.0, average_year = 0.0;
    for (int i = 1; i <= 12; i++) {
        sum_year += average_value(month, i);
    }
    average_year = sum_year / count_year;
    if (average_year == 0.0) {
        return 0.0;
    }
    else {
        return average_year;
    }
}

int max_value_year(struct temperature* month) {
    int max_year = month[1].max_t;
    for (int i = 2; i <= 12; i++) {
        if (month[i].max_t > max_year) {
            max_year = month[i].max_t;
        }
    }
    return max_year; 
}

int min_value_year(struct temperature* month) {
    int min_year = month[1].min_t;
    for (int i = 2; i <= 12; i++) {
        if (month[i].min_t < min_year) {
            min_year = month[i].min_t;
        }
    }
    return min_year; 
}

void print_space() {
    printf("\n");
}

void print_info() {
    print_space();
    printf("This console application is a project for course 'Basic Programming in C'.\n");
    printf("Developped by student Ivan Radchenko.\n");
    printf("This console application displays average, minimal and maximal temperature per each month and per a year.\n");
    opterr = 0;
}

void print_stats(struct temperature* month, _Bool ischeck_month, _Bool ischeck_year) {
    if (ischeck_month == true) {
        print_space();
        printf("Stats per a choosen month\n"); 
        printf("Average = %0.2f Min = %d Max = %d Sum = %ld Count = %ld\n", average_value(month, nm), month[nm].min_t, month[nm].max_t, month[nm].sum, month[nm].count);
        print_space();
    }
    else if (ischeck_year) {
        print_space();
        printf("Stats per each month\n");
        for (int i = 1; i <= 12; i++) {
            printf("Month %d Average = %0.2f Min = %d Max = %d Sum = %ld Count = %ld\n", i, average_value(month, i), month[i].min_t, month[i].max_t, month[i].sum, month[i].count);
        }
        print_space();
        printf("Stats per a year\n");
        printf("Average = %0.2f Min = %d Max = %d\n", average_value_year(month), min_value_year(month), max_value_year(month));
        print_space();
    }
}

void data_scan(struct temperature* month, FILE *f, int y, int m, int d, int h, int mi, int t) {
    _Bool ischeck_error = false, iserror_text = true;
    f = fopen(file_name, "r");
    while ((a = (fscanf(f, "%d; %d; %d; %d; %d; %d", &y, &m, &d, &h, &mi, &t))) != EOF) {
        if (a != 6) {
            ischeck_error = true;
            if (ischeck_error && iserror_text) {
                print_space();
                printf("Error list\n");
                ischeck_error = false;
                iserror_text = false;
            }
            char error[100] = {0};
            fscanf(f, "%[^\n]", error);
            fprintf(stderr, "Error string: %s\n", error);
        } else {
            //printf("Ok string: %d; %d; %d; %d; %d; %d\n", y, m, d, h, mi, t);
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
}

void keys_scan(int argc, char *argv[]) {
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
                check_month = true;
                printf("Current month: %d\n", nm); break;
            case '?': print_space(); 
                printf("Error found! No such key %s exists. Try -h for help.\n", argv[optind-1]); break;
        }
    }
}