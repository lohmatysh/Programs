#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int count_bigger_abs(int size, int a[]);

int main() {
    enum {SIZE = 10};
    int a [SIZE] = {0};
    int i = 0, size = 0;
    printf("size = ");
    scanf("%d", &size);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    printf("%d", count_bigger_abs(size, a));
    return 0;
}

int count_bigger_abs(int size, int a[]) {
    int i = 0, max = 0, count = 0;
    for (i = 0; i < size; i++) {
        if (a [i] > max) {
            max = a [i];
        }
    }
    for (i = 0; i < size; i++) {
        if (a [i] < 0) {
            a [i] = a [i] * -1;
        }
        if (a [i] > max) {
            count++;
        }
    }
    return count;
}