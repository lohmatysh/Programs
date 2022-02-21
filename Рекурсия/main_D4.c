#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec(char n);

int main() {
    char n = 0;
    scanf("%c", &n);
    printf("%c ", n);
    rec(n);
} 

int rec(char n) {
    scanf("%c", &n);
    if (n == '\n') {
        return 0;
    }
    printf("%c ", n);
    rec(n);
}