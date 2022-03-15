#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

 void swap_negmax_last(int size, int a[]);

int main() {
    enum {SIZE = 10};
    int a [SIZE] = {0};
    int i = 0, size = 0;
    scanf("%d", &size);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    swap_negmax_last(size, a);
    return 0;
}

void swap_negmax_last(int size, int a[]) {
    int j = 0, min = 0, min_num = 0, tmp = 0, check = 1;
    min = -65533;
    for (j = 1; j < size; j++) {
        if (a [j] < 0) {
            if (a [j] > min) {
                min = a [j];
                min_num = j;
            }
        }
        if (a [j] < 0) {
            check = 0;
        }
    }
    if (check == 0) {
        tmp = a [min_num];
        a [min_num] = a [size - 1];
        a [size - 1] = tmp;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", a [i]);
    }
}