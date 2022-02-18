#include<stdio.h>

int sum_mul(int a);

int main () {
    int a = 0;
    scanf("%d", &a);
    sum_mul(a);
    return 0;
} 

int sum_mul(int a) {
    int num, current, sum, mul;
    num = a;
    mul = 1;
    sum = 0;
    current = 0;
    do {
        current = num % 10;
        num = num / 10;
        sum = sum + current;
        mul = mul * current;
    } while (!(num == 0));
    /* printf("i = %d sum = %d mul = %d\n", i, sum, mul); */
    if (sum == mul) {
        printf("YES"); 
    } 
    else {
       printf("NO"); 
    }
    return 0;
}