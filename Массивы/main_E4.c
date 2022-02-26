#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [10] = {0};
    int num_max_1 = -1, num_max_2 = -1;
    int i = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &array [i]);
        if (array [i] >= array [num_max_1]) {
            num_max_1 = i;
        }
    }
    //printf ("num_max_1 = %d \n", num_max_1);
    for (i = 0; i < 10; i++) {
        if (i != num_max_1 && array [i] >= array [num_max_2]) {
            num_max_2 = i;
        }
    }
    //printf ("num_max_2 = %d \n", num_max_2);
    printf("%d\n", (array [num_max_1] + array [num_max_2]));
    return 0;
} 