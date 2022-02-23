#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int recurs_power(int n, int p);

int main() {
    int n = 0, p = 0;
    scanf ("%d %d", &n, &p); 
    recurs_power(n, p);
    return 0;
} 

int recurs_power(int n, int p) {
    static int i = 0, sum = 1;
    if (i == p) {
        printf("%d\n", sum);
        return n;
    }
    sum = sum * n;
    i++;
    // printf("%d %d %d\n", n, i, sum);
    recurs_power(n, p);
}