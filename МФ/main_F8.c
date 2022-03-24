#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int check(int a [], int N);

int main() {
    enum {SIZE = 1000};
    int a [SIZE] = {0};
    int i = 0, size = 0, num = 0;
    do {
        scanf("%d", &num);
        a [i] = num;
        i++;
    }
    while (num != 0);
    size = i;
    check(a, size - 1);
    return 0;
}

int check(int a [], int N) {
    int b [1000] = {0};
    int i = 0, j = 0, k = 0, m = 0, min = 0, max = 0, tmp = 0;
    max = a [0];
    min = a [0]; 
    for (i = 1; i < N; i++) {
        if (a [i] > max) {
            max = a [i];
        }
        if (a [i] < min) {
            min = a [i];
        }
    }
    for (i = min; i <= max; i++) {
        b [m] = i;
        m++; 
    }
    for (j = 0; j < N - 1; j++) {
       for (k = 0; k < N - 1 - j; k++) {
            if (a [k] > a [k + 1]) {                
                tmp = a [k];
                a [k] = a [k + 1];
                a [k + 1] = tmp;
            }
        }
    }
    for (i = 0; i < N; i++) {
        if (a [i] != b [i]) {
            printf("%d", b [i]);
            break;
        }
    }
    return 0;
}