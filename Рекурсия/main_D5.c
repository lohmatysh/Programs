#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n, int sum, int mul);

int main() {
    int n = 0, sum = 0, mul = 1;
    scanf("%d", &n);
    rec(n, sum, mul);
    return 0;
} 

int rec(int n, int sum, int mul) {
    int div = 0;
    int rem = 1;
    div = n / 2;
    rem = n % 2;
    rem = rem * mul;
    sum = sum + rem;
    mul = mul * 10;
    n = div;
    // printf("n = %d rem = %d sum = %d div = %d mul = %d\n", n, rem, sum, div, mul);
    if (n == 0) {
        printf("%d", sum);
        return sum;
    }
    rec(n, sum, mul);
}