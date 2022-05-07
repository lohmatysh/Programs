#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "temp_functions.h"

// Глобальные переменные
_Bool check_month, check_year;
char file_name[256];
int a, y, m, d, h, mi, t, rez, nm;
FILE *f;

// Основная программа 
int main(int argc, char *argv[]) {
    print_info(); // Вывод вводной информации
    keys_scan(argc, argv, file_name, nm, rez, check_month, check_year); // Обработка ключей программы
    data_scan(month, f, file_name, a, y, m, d, h, mi, t, rez, nm); // Считывание данных из файла
    print_stats(month, nm, check_month, check_year); // Вывод данных
    return 0;
}