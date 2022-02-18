#include<stdio.h>

int main () {
    int a, b, i, sqr, sum;
    scanf("%d%d", &a, &b);
    i = a;
    sum = 0;
    for (i = a; i <= b; i++) {
        sqr = i * i;
        sum = sum + sqr;
    }
    printf("%d", sum);
    return 0;
} 
