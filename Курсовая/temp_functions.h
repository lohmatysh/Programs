#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

// Структуры
struct data {
    int year, moon, day, hour, min, t;
};

struct temperature {
    struct data info;
    int max_t;
    int min_t;
    long signed int count;
    long signed int sum;
} month[12] = {0};

// Объявление функций
float average_value(struct temperature* month, int n);
int max_value(struct temperature* month, int n, int t);
int min_value(struct temperature* month, int n, int t);
float average_value_year(struct temperature* month);
int max_value_year(struct temperature* month);
int min_value_year(struct temperature* month);
void print_space();
void print_info();
void keys_scan(int argc, char *argv[], char *file_name, int nm, int rez, _Bool ischeck_month, _Bool ischeck_year);
void data_scan(struct temperature* month, FILE *f, char *file_name, int a, int y, int m, int d, int h, int mi, int t, int rez, int nm);
void print_stats(struct temperature* month, int nm, _Bool ischeck_month, _Bool ischeck_year);