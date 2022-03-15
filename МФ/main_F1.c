#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void sort_array(int size, int a[]);

int main() {
    enum {SIZE = 10};
    int a [SIZE] = {0};
    int i = 0, size = 0;
    scanf("%d", &size);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    sort_array(size, a);
    return 0;
}

void sort_array(int size, int a[]) {
    int i = 0, j = 0, k = 0, tmp = 0;
    for (j = 0; j < size - 1; j++) {
       for (k = 0; k < size - 1 - j; k++) {
            if (a [k] > a [k + 1]) {                
                tmp = a [k];
                a [k] = a [k + 1];
                a [k + 1] = tmp;
            }
        }
    }
    for (i = 0; i < size; i++) {
        printf("%d ", a [i]);
    }
}