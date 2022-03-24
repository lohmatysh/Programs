#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int compression(int a [], int b [], int N);

int main() {
    enum {SIZE = 100};
    int a [SIZE] = {0};
    int b [SIZE] = {0};
    int i = 0, size = 0;
    scanf("%d", &size);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    compression(a, b, size);
    return 0;
}

int compression(int a [], int b [], int N) {
    int i = 0, j = 0, current = 0;
    current = a [0];
    if (a[0] != 0) {
        j++;
        b [j]++;
    }
    else {
        b [j]++;
    }
    for (i = 1; i < N; i++) {
        if (current == a [i]) {
            b [j]++;
        }
        else {
            j++;
            b [j]++;
        }
        current = a [i];
    }
    for (i = 0; i <= j; i++) {
        printf("%d ", b [i]);
    }
    j++;
    printf("\n");
    printf("%d", j);
    return j;
}