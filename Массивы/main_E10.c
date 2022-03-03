#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [12] = {0};
    int i = 0;
    for (i = 0; i < 12; i++) {
        scanf("%d", &array [i]);
    }
    printf("%d ", array [8]);
    printf("%d ", array [9]);
    printf("%d ", array [10]);
    printf("%d ", array [11]);
    for (i = 4; i < 12; i++) {
        printf("%d ", array [i - 4]);
    }
    return 0;
}