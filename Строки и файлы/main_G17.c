#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void swap(char *string1, int *num1, int i);

char string [1001] = {0};
int alpabet[1001] = {0};
char c = 0;
int i = 0, j = 0, k = 0, num = 0;
FILE *f;

int main() {
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        if (c != ' ') {
            alpabet[j] = i; 
            j++;
        }
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    /*
    for (k = 0; k < i; k++) {
        printf("%c", string[k]);
    }
    printf("\n");
    */
    for (k = 0; k < i - 2; k +=2) {
        //printf("Num = %d Symbol = %c\n", alpabet[k], string [alpabet[k]]);
        swap(string, alpabet, k);
    }
    for (k = 0; k < i; k++) {
        fprintf(f, "%c", string[k]);
    }
    fclose (f);
    return 0;  
}

void swap(char *string1, int *num1, int i) {
    char tmp;
    tmp = string1[num1[i]];
    string1[num1[i]] = string1[num1[i + 1]];
    string1[num1[i + 1]] = tmp;
}