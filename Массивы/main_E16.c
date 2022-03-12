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
    max = 0;
    for (i = 0; i < SIZE; i++) {
        //printf("%d ", digits [j]);
        if (digits [i] > max) {
            max = i;
        }
    }
    printf("%d", array [max]);
    return 0;
}