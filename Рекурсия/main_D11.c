#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n, int i, int j);

int main() {
    int n = 0, i = 0, j = 0;
    scanf("%d", &n);
    rec(n, i, j);
    return 0;
} 


int rec(int n, int i, int j) {
    if (j >= 16){
        printf("%d", i);
        return 0;
    }
    if (n & 0b1) {
        i++;
    }
    n = n >> 1;
    j++;
    rec(n, i, j);
}