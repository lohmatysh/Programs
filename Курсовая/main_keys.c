#include "temp_functions.h"

// Глобальные переменные
_Bool check_month = false, check_year = false;
char file_name[256];
int a, y, m, d, h, mi, t, rez = 0, nm = 0;
FILE *f;

// Основная программа 
int main(int argc, char *argv[]) {
    print_info(); // Вывод вводной информации
    keys_scan(argc, argv); // Обработка ключей программы
    data_scan(month, f); // Считывание данных из файла
    print_stats(month, check_month, check_year); // Вывод данных
    return 0;
}