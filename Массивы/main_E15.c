#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int array_neg [SIZE] = {0};
    int array_pos [SIZE] = {0};
    int i = 0, n = 0, p = 0;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array [i]);
        if (array [i] > 0) {
            array_pos [p] = array [i];
            p++;
        }
        if (array [i] < 0) {
            array_neg [n] = array [i];
            n++;
        }  
    }
    for (i = 0; i < p; i++) {
        printf("%d ", array_pos [i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", array_neg [i]);
    }
    return 0;
}