#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    float array [5] = {0.0};
    float average = 0.0;
    for (int i = 0; i < 5; i++) {
        scanf("%f", &array [i]);
        average = average + array [i];
    }
    average = average / 5.0;
    printf ("%.3f\n", average);
    return 0;
} 