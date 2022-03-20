#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void print_digit(char s[]);

int main() {
    char c = 0;
    char s[1000] = {0};
    int i = 0;
    do {
        scanf("%c", &c);
        s[i] = c;
        i++;
    }
    while (c != '.');
    print_digit(s);
    return 0;
}

void print_digit(char s[]) {
    int i = 0, j = 0, k = 0;
    int digits [10] = {0};
    do {
        k = s[i] - 48;
        for (j = 0; j < 10; j++) {
            if (k == j) {
                digits[j]++;
            }
        }
        i++;
    }
    while (s[i] != '.');
    for (i = 0; i < 10; i++) {
        if(digits[i] != 0) {
            printf("%d %d\n", i, digits[i]);
        }
    }
}