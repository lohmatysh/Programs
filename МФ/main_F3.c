#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void print_digit(char s[], int size);

int main() {
    char c = 0;
    char s[1000] = {0};
    int i = 0, size;
    do {
        scanf("%c", &c);
        s[i] = c;
        i++;
    }
    while (48 <= c && c <= 57);
    size = i;
    print_digit(s, size);
    return 0;
}

void print_digit(char s[], int size) {
    int i = 0, j = 0, k = 0;
    int digits [10] = {0};
    for (i = 0; i < size - 1; i++) {
        k = s[i] - 48;
        //printf("%d", k);
        for (j = 0; j < 10; j++) {
            if (k == j) {
                digits[j]++;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        if(digits[i] != 0) {
            printf("%d %d\n", i, digits[i]);
        }
    }
}