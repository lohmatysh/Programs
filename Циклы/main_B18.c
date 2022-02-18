#include<stdio.h>

int main (void) {
    int a, b, i, j, num, fib;
    scanf("%d", &num);
    i = num;
    j = 0;
    a = 0;
    b = 1;
    printf("%d ", b);
    for (j = 0; j < i - 1; j++) {
        fib = a + b;
        printf("%d ", fib); 
        a = b;
        b = fib;
    }
    return 0;
}