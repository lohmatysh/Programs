#include "temp_functions.h"

// Глобальные переменные
extern _Bool check_month = false, check_year = false;
extern char file_name[256];
extern int a, y, m, d, h, mi, t, rez = 0, nm = 0;
extern FILE *f;

// Основная программа 
int main(int argc, char *argv[]) {
    print_info(); // Вывод вводной информации
    keys_scan(argc, argv); // Обработка ключей программы
    data_scan(month, f); // Считывание данных из файла
    print_stats(month, check_month, check_year); // Вывод данных
    return 0;
}