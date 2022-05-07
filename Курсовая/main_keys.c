#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "temp_functions.h"

// Глобальные переменные
_Bool check_month, check_year;
char file_name[256];
int a;
int y, m, d, h, mi, t;
int rez, nm;
FILE *f;
struct temperature month[12] = {0};
union u union_month = {0};

// Основная программа 
int main(int argc, char *argv[]) {
    print_info(); // Вывод вводной информации
    keys_scan(argc, argv, file_name, union_month, nm, rez, check_month, check_year); // Обработка ключей программы
    data_scan(month, f, file_name, a, y, m, d, h, mi, t, rez, nm); // Считывание данных из файла
    print_stats(month, nm, check_month, check_year); // Вывод данных
    return 0;
}