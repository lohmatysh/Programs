#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [10] = {0};
    int min = 999999, max = 0;
    int num_min = 0, num_max = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array [i]);
        if (array [i] < min) {
            min = array [i];
            num_min = i + 1;
        }
        if (array [i] > max) {
            max = array [i];
            num_max = i + 1;
        }
    }
    printf ("%d %d %d %d\n", num_max, max, num_min, min);
    return 0;
}  