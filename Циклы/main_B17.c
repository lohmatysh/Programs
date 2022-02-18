#include<stdio.h>

int main (void) {
    int a, i, j, num, current, sum, mul;
    scanf("%d", &a);
    num = j = a;
    mul = 1;
    sum = 0;
    current = 0;
    num = i = 10;
    for (i=10; i <= j; i++) {
        num = i;
        do {
            current = num % 10;
            num = num / 10;
            sum = sum + current;
            mul = mul * current;
        } while (!(num == 0));
        /* printf("i = %d sum = %d mul = %d\n", i, sum, mul); */
        if (sum == mul) {
            printf("%d ", i);
        } 
        sum = 0;
        mul = 1;
    } 
    return 0;
}
