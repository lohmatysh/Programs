#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int func(int a[]);

int main() {
    enum {SIZE = 10};
    int a [SIZE] = {0};
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    func(a);
    return 0;
}

int func(int a[]) {
    int i = 0, odd = 0, even = 0, num = 0, tmp = 1, s = 0;
    for (i = 0; i < 10; i++) {
        if (a [i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    if (even > odd) {
        for (i = 0; i < 10; i++) {
            if (a [i] % 2 != 0) {
                tmp = 1;
                num = a [i];
                while (num != 0) {
                    s = num % 10;
                    if (s % 2 != 0) {
                        tmp = tmp * s;
                    }
                    num = num / 10;
                }
                a [i] = tmp;
            }
        }
    }
    else {
        for (i = 0; i < 10; i++) {
            if (a [i] % 2 == 0) {
                tmp = 1;
                num = a [i];
                while (num != 0) {
                    s = num % 10;
                    if (s % 2 == 0) {
                        tmp = tmp * s;
                    }
                    num = num / 10;
                }
                a [i] = tmp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", a [i]);
    }
    return 0;
}