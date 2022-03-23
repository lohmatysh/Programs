#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    char letter = 0, number = 0;
    scanf("%c%c", &letter, &number);
    if ((letter + number) % 2 == 0) {
        printf("BLACK");
    }
    else {
        printf("WHITE");
    }
    return 0;
}