#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    int array [10] = {0};
    int i = 0, n = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &array [i]);
        if (i == 4) {
            n = array [0];
            array [0] = array [4];
            array [4] = n;
            n = array [1];
            array [1] = array [3];
            array [3] = n;
        }
        if (i == 9) {
            n = array [5];
            array [5] = array [9];
            array [9] = n;
            n = array [6];
            array [6] = array [8];
            array [8] = n;
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", array [i]);
    }
    return 0;
}