#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [5] = {0};
    int min = 999999;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array [i]);
        if (array [i] < min) {
            min = array [i];
        }
    }
    printf ("%d\n", min);
    return 0;
} 