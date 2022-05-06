#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

// Глобальные переменные
_Bool check_month, check_year;
char file_name[256];
int a, y, m, d, h, mi, t, rez, nm;
FILE *f;

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
void data_scan(struct temperature* month, FILE *f);
void keys_scan(int argc, char *argv[]);