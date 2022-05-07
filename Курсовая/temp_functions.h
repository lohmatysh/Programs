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
float average_value(struct temperature* month, int n);
int max_value(struct temperature* month, int n, int t);
int min_value(struct temperature* month, int n, int t);
float average_value_year(struct temperature* month);
int max_value_year(struct temperature* month);
int min_value_year(struct temperature* month);
void print_space();
void print_info();
int scan_keys(int argc, char *argv[], char *file_name, union u union_month, int rez, int nm);
void print_stats(struct temperature* month, int check);