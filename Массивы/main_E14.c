#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void swap(int *pa, int *pb);

int main() {
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int array_sort [SIZE] = {0};
    int i = 0, j = 0, k = 0, last_num = -1;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array [i]);
    }
    for (j = 0; j < SIZE - 1; j++) {
        for (k = 0; k < SIZE - 1 - j; k++) {
                if (array [k] > array [k + 1]) {
                    swap(&array [k], &array [k + 1]);
                }
            }
    }
    j = 0;
    for (i = 0; i < SIZE - 1; i++) {
        if (array [i] == array [i + 1] && array [i] != last_num) {
            array_sort [j] = array [i];
            j++;
        }
        last_num = array [i];
    }
    for (i = 0; i < j; i++) {
        printf("%d ", array_sort [i]);
    }
    return 0;
}

void swap(int *pa, int *pb) {
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}