#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int i = 0, j = 0, k = 0, n = 0;
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int digits [SIZE] = {0};
    int nums [10000] = {0};
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        nums [i] = i;
    }
    for (j = 2; j <= 9; j++) {
        digits [j] = j;
    }
    for (j = 2; j <= 9; j++) {
        for (k = 2; k <= n; k++) {
            if ((nums [k] % digits [j]) == 0) {
                array [j - 2]++;
            }
            //printf("digits [%d] / nums [%d] = %d array [%d] = %d\n", nums [k], digits [j], (nums [k] % digits[j]), j, array [j - 2]);
        }
    }
    for (i = 2; i <= 9; i++) {
        printf("%d %d\n", digits [i], array [i - 2]);
    }
    return 0;
}