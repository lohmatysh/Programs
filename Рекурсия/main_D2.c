#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n, int i, int sum);

int main() {
    int n = 0, i = 0, sum = 0, sum_all = 0;
    scanf("%d", &n);
    sum_all = rec(n, i, sum);
    printf("%d", sum_all);
    return 0;
} 

int rec(int n, int i, int sum) {

    return 0;
}