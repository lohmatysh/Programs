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
    while (c != '.');
    size = i;
    print_digit(s, size);
    return 0;
}

void print_digit(char s[], int size) {
    int i = 0, j = 0;
    char current = 0;
    int b [1000] = {0};
    char c [1000] = {0};
    current = s [0];
    c [0] = s [0];
    b [j]++;
    for (i = 1; i < size; i++) {
        if (current == s [i]) {
            b [j]++;
        }
        else {
            j++;
            c [j] = s [i];
            b [j]++;
        }
        current = s [i];
    }
    for (i = 0; i < j; i++) {
        printf("%c%d", c [i], b [i]);
    }
}