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
        if (alpabet[j] != 0) {
            printf("Num = %d Letter = %c\n", alpabet[j], ('a' + j));
        } 
    }
    printf("\n");
    for (int k = 0; k < 26; k++) {
        if (((alpabet[k] % 2) == 0) && (alpabet[k] != 0)) {
            printf("%c", ('a' + k));
        } 
    }
    for (int k = 0; k < 26; k++) {
        if ((alpabet[k] % 2) != 0) {
            printf("%c", ('a' + k));
            break; 
        }
    }
    for (int k = 26; k >= 0; k--) {
        if (((alpabet[k] % 2) == 0) && (alpabet[k] != 0)) {
            printf("%c", ('a' + k));
        } 
    }
    fclose (f);
    return 0;  
}