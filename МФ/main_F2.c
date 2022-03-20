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
    int j = 0, k = 0;
    int a_odd [1000] = {0};
    int a_even [1000] = {0};
    for (int i = 0; i < n; i++) {
        if ((a [i] % 2) == 0)  {
            a_odd [j] = a [i];
            j++;
        }
        else {
            a_even [k] = a [i];
            k++; 
        }
    }
    for (int i = 0; i < j; i++) {
        a [i] = a_odd [i];
    }
    for (int i = 0; i < k; i++) {
        a [i + j] = a_even [i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a [i]);
    }
}