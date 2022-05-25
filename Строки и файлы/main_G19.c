#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void print_c (int num, int q);

char string [1001] = {0};
int alpabet[26] = {0};
char c = 0;
int i = 0, j = 0, k = 0, num = 0, num_c = 0;
FILE *f;

int main() {
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        num = string [i] - 'a';
        alpabet[num]++;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (int k = 0; k < 26; k++) {
        num_c = alpabet[k];
        print_c(k, num_c);
    }
    for (int k = 0; k < 26; k++) {
        if ((alpabet[k] % 2) != 0) {
            fprintf(f, "%c", ('a' + k));
            break; 
        }
    }
    for (int k = 25; k >= 0; k--) {
        num_c = alpabet[k];
        print_c(k, num_c);
    }
    fclose (f);
    return 0;  
}

void print_c (int num, int q) {
    if (q >= 2 || (q % 2) == 0) {
        for (int i = 0; i < q / 2; i++) {
            fprintf(f, "%c", ('a' + num));
        }
    }
} 