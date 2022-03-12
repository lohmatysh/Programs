#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int digits [SIZE] = {0};
    int i = 0, j = 0, k = 0, max = 0;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array [i]);
    }
    for (j = 0; j < SIZE - 1; j++) {
        for (k = j + 1; k < SIZE; k++) {
            if (array [j] == array [k]) {
                digits [j]++;
            }
        }
    }
    max = digits [0];
    for (j = 0; j < SIZE - 1; j++) {
        for (k = j + 1; k < SIZE; k++) {
                if (digits [j] > digits [k]) {
                    max = j;
                }
            }
    }
    printf("%d", array [max]);
    return 0;
}