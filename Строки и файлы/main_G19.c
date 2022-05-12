#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

char string [1001] = {0};
int alpabet[26] = {0};
char c = 0;
int i = 0, j = 0, k = 0, num = 0;
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
    for (j = 0; j < 26; j++) {
        printf("Num = %d Letter = %c\n", alpabet[j], ('a' + j));
    }
    fclose (f);
    return 0;  
}