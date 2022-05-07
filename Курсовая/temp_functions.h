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
};

union u {
    char ch[256];
    int i;
};

// Объявление функций
float average_value(struct temperature* month_data, int n);
int max_value(struct temperature* month_data, int n, int t);
int min_value(struct temperature* month_data, int n, int t);
float average_value_year(struct temperature* month_data);
int max_value_year(struct temperature* month_data);
int min_value_year(struct temperature* month_data);
void print_space();
void print_info();
void keys_scan(int argc, char *argv[], char *file_name, union u union_month, int nm, int rez, _Bool ischeck_month, _Bool ischeck_year);
void data_scan(struct temperature* month_data, FILE *f, char *file_name, int a, int y, int m, int d, int h, int mi, int t, int rez, int nm);
void print_stats(struct temperature* month_data, int nm, _Bool ischeck_month, _Bool ischeck_year);