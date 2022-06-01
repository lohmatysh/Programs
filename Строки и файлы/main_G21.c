#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void print_triangle(int m);

char string [1001] = {0};
char c = 0;
int i = 0, j = 0, k = 0, num_star = 0, check = 3, sum = 2;
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
    for (j = 0; j < num_star; j++) {
        if (num_star == check) {
            print_triangle(sum);
            break;
        }
        else if (num_star < check) {
            fprintf(f, "NO");
            break;
        }
        sum++;
        check = check + sum;
    }
    fclose(f);
    return 0;  
}

void print_triangle(int m) {
    for (int i = 1; i <= m; i++) {
        for (int j = m - i; j > 0; j--) {
            fprintf(f, " ");
        }
        for (int k = 1; k < i ; k++) {
            fprintf(f, "*");
            fprintf(f, " ");
        }
        fprintf(f, "*\n");
    }
}