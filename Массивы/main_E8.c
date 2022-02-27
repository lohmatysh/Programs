#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [12] = {0};
    int i = 0, n = 0;
    for (i = 0; i < 12; i++) {
        scanf("%d", &array [i]);
        if (i == 4) {
            n = array [0];
            array [0] = array [3];
            array [3] = n;
            n = array [1];
            array [1] = array [2];
            array [2] = n;
        }
        n = 0;
        if (i == 7) {
            n = array [4];
            array [4] = array [7];
            array [7] = n;
            n = array [5];
            array [5] = array [6];
            array [6] = n;
        }
        n = 0;
        if (i == 11) {
            n = array [8];
            array [8] = array [11];
            array [11] = n;
            n = array [9];
            array [9] = array [10];
            array [10] = n;
        }
    }
    for (i = 1; i < 12; i++) {
        printf("%d ", array [i]);
    }
    return 0;
}