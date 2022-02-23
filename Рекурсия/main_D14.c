#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void rec(void);

int main() {
    rec();
    return 0;
} 

void rec(void) {
    int n;
    scanf ("%d", &n); 
    if (n != 0) {
        if ((n % 2) != 0) {
            printf ("%d ", n);
        }
        rec();
    }
}