#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n, int i, int sum);

int main() {
    int n = 0, i = 1, sum = 0, sum_all = 0;
    scanf("%d", &n);
    sum_all = rec(n, i, sum);
    printf("%d\n", sum_all);
    return 0;
} 

int rec(int n, int i, int sum) {
    if (i > n){
        return sum;
    }
    sum = sum + i;
    i++;
    // printf("i = %d sum = %d\n", i, sum);
    rec(n, i, sum);
}