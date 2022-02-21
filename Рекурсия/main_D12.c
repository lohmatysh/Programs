#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n, int i, int j, int k);

int main() {
    int n = 0, i = 1, j = 0;
    int k = 0;
    scanf("%d", &n);
    rec(n, i, j, k);
    return 0;
} 

int rec(int n, int i, int j, int k) {
    if (k >= n){
        return 0;
    }
    j = 1;
    for (j = 1; j <= i; j++) {
        printf("%d ", i);
        k++;
        if (k >= n) {
            break;
        }
    }
    i++;
    rec(n, i, j, k);
}