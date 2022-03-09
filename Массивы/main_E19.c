#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    enum {SIZE = 10};
    int array [SIZE] = {0};
    int i = 0, n = 0, a = 0;
    scanf("%d", &n);
    while (n != 0) {
        array [a] = n % 10;
        a++;
        n = n / 10;
    }
    for (i = a - 1; i >= 0 ; i--) {
        printf("%d ", array [i]);
    }
    return 0;
}