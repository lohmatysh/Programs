#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int sum_digits(int n, int b, int sum);

int main() {
    int n = 0, b = 1, sum = 0, sum_all = 0;
    scanf("%d", &n);
    sum_all = sum_digits(n, b, sum);
    printf("%d\n", sum_all);
    return 0;
} 

int sum_digits(int n, int b, int sum) {
    if (n == 0){
        return sum;
    }
    b = n % 10;
    sum = sum + b;
    n = n / 10;
    // printf("i = %d sum = %d\n", i, sum);
    sum_digits(n, b, sum);
}