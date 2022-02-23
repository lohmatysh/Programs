#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int is2pow(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    is2pow(n);
    return 0;
} 

int is2pow(int n) {
    static int i = 0, j = 0;
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
    is2pow(n);
}