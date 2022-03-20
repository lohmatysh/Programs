#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int sum_between_ab(int from, int to, int size, int a[]);

int main() {
    enum {SIZE = 10};
    int a [SIZE] = {0};
    int i = 0, size = 0, from = 0, to = 0;
    printf("size = ");
    scanf("%d", &size);
    printf("from = ");
    scanf("%d", &from);
    printf("to = ");
    scanf("%d", &to);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    printf("%d", sum_between_ab(from, to, size, a));
    return 0;
}

int sum_between_ab(int from, int to, int size, int a[]) {
    int i = 0, sum = 0;
    for (i = 0; i < size; i++) {
        if (a [i] >= from && a [i] <= to) {
            sum = a [i] + sum;
        }
    }
    return sum;
}