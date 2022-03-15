#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int find_max_array(int size, int a[]);

int main() {
    enum {SIZE = 10};
    int a [SIZE] = {0};
    int i = 0, size = 0;
    scanf("%d", &size);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    printf("%d", find_max_array(size, a));;
    return 0;
}

int find_max_array(int size, int a[]) {
    int j = 0, max = 0;
    max = a [0];
    for (j = 1; j < size; j++) {
        if (a [j] > max) {
            max = a [j];
        }
    }
    return max;
}