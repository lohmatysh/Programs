#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int i = 0, j = 0, k = 0, n = 0;
    enum {SIZE = 10};
    int array [n] = {0};
    int digits [SIZE] = {0};
    scanf("%d", &n);
    for (i = 2; i < SIZE - 1; i++) {
        array [i] = i;
    }
    for (j = 2; j < SIZE - 1; j++) {
        for (k = 2; k < n; k++) {
                if (j / k == 0) {
                    digits [j]++;
                }
            }
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", digits [i]);
    }
    return 0;
}