#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void sort_even_odd(int n, int a[]);

int main() {
    enum {SIZE = 20};
    int a [SIZE] = {0};
    int i = 0, n = 0;
    scanf("%d", &n);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    sort_even_odd(n, a);
    return 0;
}

void sort_even_odd(int n, int a[]) {
    int j = 0, k = 0, tmp = 0;
    for (j = 0; j < n - 1; j++) {
        _Bool check_swap = true;
        for (k = 0; k < n - 1 - j; k++) {
            if ((a [k] % 2) != 0 && check_swap) {                
                tmp = a [k];
                a [k] = a [k + 1];
                a [k + 1] = tmp;
                check_swap = false; 
            }
            else if (check_swap == false) {                
                check_swap = true; 
            }
        }
    }
}