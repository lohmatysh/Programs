#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [10] = {0};
    int average = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array [i]);
        if (array [i] > 0) {
            average = average + array [i];
        }
    }
    printf ("%d\n", average);
    return 0;
} 