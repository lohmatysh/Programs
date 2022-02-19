#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n, int b);

int main() {
    int n = 0, b = 0;
    scanf("%d", &n);
    rec(n, b);
    if (n == 0){
        printf("%d", n);
    }
    return 0;
} 

int rec(int n, int b) {
    if (n == 0){
        return 0;
    }
    b = n % 10;
    printf("%d ", b);
    n = n / 10;
    rec(n, b);
}