#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n, int i);

int main() {
    int n = 0, i = 0;
    scanf("%d", &n);
    rec(n, i);
    return 0;
} 

int rec(int n, int i) {
    if (i >= n){
        return 0;
    }
    i++;
    printf("%d ", i);
    rec(n, i);
    return 0;
}