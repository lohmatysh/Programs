#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "temp_functions.h"

// Функции
// Cреднее значение температуры за месяц
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

// Максимальная температура за месяц
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

// Минимальная температура за месяц
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

// Cреднее значение температуры за год
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

// Максимальная температура за месяц
int max_value_year(struct temperature* month) {
    int max_year = month[1].max_t;
    for (int i = 2; i <= 12; i++) {
        if (month[i].max_t > max_year) {
            max_year = month[i].max_t;
        }
    }
    return max_year; 
}

// Минимальная температура за год
int min_value_year(struct temperature* month) {
    int min_year = month[1].min_t;
    for (int i = 2; i <= 12; i++) {
        if (month[i].min_t < min_year) {
            min_year = month[i].min_t;
        }
    }
    return min_year; 
}

// Вывод пробела
void print_space() {
    printf("\n");
}

// Вывод вводной информации
void print_info() {
    print_space();
    printf("This console application is a project for course 'Basic Programming in C'.\n");
    printf("Developped by student Ivan Radchenko.\n");
    printf("This console application displays average, minimal and maximal temperature per each month and per a year.\n");
}