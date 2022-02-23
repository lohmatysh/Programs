#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    rec(n);
    return 0;
} 

int rec(int n) {
    static int i = 2;
    if (i <= n) {
        if(n % i == 0) {
            printf("%d ", i);
            n /= i;
        } 
        else {
            i++;
        }
        rec(n);
    }
    else {
        return 0;
    }    
}