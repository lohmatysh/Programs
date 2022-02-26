#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    float array [12] = {0.0};
    float average = 0.0;
    for (int i = 0; i < 12; i++) {
        scanf("%f", &array [i]);
        average = average + array [i];
    }
    average = average / 12.0;
    printf ("%.2f\n", average);
    return 0;
} 