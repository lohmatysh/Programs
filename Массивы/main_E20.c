#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void swap(int *pa, int *pb);

int main() {
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int i = 0, j = 0, k = 0, n = 0, a = 0;
    scanf("%d", &n);
    while (n != 0) {
        array [a] = n % 10;
        a++;
        n = n / 10;
    }
    for (j = 0; j < SIZE - 1; j++) {
        for (k = 0; k < SIZE - 1 - j; k++) {
                if (array [k] < array [k + 1]) {
                    swap(&array [k], &array [k + 1]);
                }
            }
    }
    for (i = 0; i < a; i++) {
        printf("%d", array [i]);
    }
    return 0;
}

void swap(int *pa, int *pb) {
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}