#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int simple(int num, int base);

int main() {
    int num = 0, base = 0;
    scanf("%d%d", &num, &base);
    simple(num, base);
    return 0;
} 

int simple(int num, int base) {
    int a = num;
    int rem = 1;
    int sum = 0;
    int div = 0;
    int mul = 1;
    for (int i = 0; i < 10; i++) {
        div = num / base;
        rem = num % base;
        rem = rem * (mul);
        sum = sum + rem;
        mul = mul * 10;
        num = div;
        a = a / 10; 
        // printf("num = %d rem = %d sum = %d div = %d mul = %d\n", num, rem, sum, div, mul);
    }
    printf("%d\n", sum);
    return 0;
}