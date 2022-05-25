#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void print_c (int num, int q);

char string [1001] = {0};
char c = 0;
int i = 0, j = 0, k = 0, num_star = 0;
FILE *f;

int main() {
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        if (c == '*') {
            num_star++;
        }
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    printf("%d", num_star);
    fclose (f);
    return 0;  
}