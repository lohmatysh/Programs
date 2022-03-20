#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void change_max_min(int size, int a[]);

int main() {
    enum {SIZE = 10};
    int a [SIZE] = {0};
    int i = 0, size = 0;
    scanf("%d", &size);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    change_max_min(size, a);
    return 0;
}

void change_max_min(int size, int a[]) {
    int j = 0, min = 0, min_num = 0, max = 0, max_num, tmp = 0;
    min = a [0];
    max = a [0];
    for (j = 1; j < size; j++) {
        if (a [j] > max) {
            max = a [j];
            max_num = j;
        }
        if (a [j] < min) {
            min = a [j];
            min_num = j;
        }
    }
    tmp = a [min_num];
    a [min_num] = a [max_num];
    a [max_num] = tmp;
    for (int i = 0; i < size; i++) {
        printf("%d ", a [i]);
    }
}