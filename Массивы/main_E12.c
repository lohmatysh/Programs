#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void swap(int *pa, int *pb);

int main() {
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int i = 0, j = 0, k = 0;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array [i]);
    }
    for (j = 0; j < SIZE - 1; j++) {
        if (j >= 0 && j < (SIZE / 2)) {
            for (k = 0; k <= (SIZE / 2) - 1 - j; k++) {
                if (array [k] > array [k + 1]) {
                    swap(&array [k], &array [k + 1]);
                }
            }
        }
        if (j >= (SIZE / 2) && j < SIZE) {
            for (k = (SIZE / 2); k < SIZE - 1; k++) {
                if (array [k] < array [k + 1]) {
                    swap(&array [k], &array [k + 1]);
                }
            }
        }
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array [i]);
    }
    return 0;
}

void swap(int *pa, int *pb) {
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}