#include<stdio.h>

int main () {
    int a, b, i, sqr;
    scanf("%d%d", &a, &b);
    i = a;
    for (i = a; i <= b; i++) {
        sqr = i * i;
        printf("%d ", sqr);
    }
    return 0;
} 

