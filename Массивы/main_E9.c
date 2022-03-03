#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [10] = {0};
    int i = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &array [i]);
    }
    printf("%d ", array [9]);
    for (i = 1; i < 10; i++) {
        printf("%d ", array [i - 1]);
    }
    return 0;
}