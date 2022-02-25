#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int is_prime(int n, int delitel);

int main() {
    int n = 0, delitel = 1;
    scanf("%d", &n);
    if (is_prime(n, delitel)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
} 

int is_prime(int n, int delitel) {
    if (n <= 1) {
        return 0;
    }
    if (delitel <= 1) {
        delitel = 2;
    }
    if (delitel == n) {
        return 1;
    }
    if (n % delitel == 0){
        return 0;
    }
    return is_prime(n, delitel + 1);    
}