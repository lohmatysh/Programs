#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array [i]);
        if (((array [i] / 10) % 10) == 0) {
            printf("%d ", array [i]);
        }  
    }
    return 0;
}
