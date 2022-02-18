#include<stdio.h>

int main () {
    int a, i, sqr, cub;
    scanf("%d", &a);
    i = 1;
    for (i = 1; i <= a; i++) {
        sqr = i * i;
        cub = sqr * i;
    printf("%d %d %d\n", i, sqr, cub);
    }
    return 0;
} 
