#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int is2pow(int n, int i, int j);

int main() {
    int n = 0, i = 0, j = 0;
    scanf("%d", &n);
    is2pow(n, i, j);
    return 0;
} 

int is2pow(int n, int i, int j) {
    if (j >= 16){
        if (i == 1) {
            printf("YES");
            return 0;
        }
        else {
            printf("NO");
            return 0;
        }
    }
    if (n & 0b1) {
        i++;
    }
    n = n >> 1;
    j++;
    is2pow(n, i, j);
}