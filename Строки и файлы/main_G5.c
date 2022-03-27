#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1100] = {0};
    char c = 0;
    int i = 0, j = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 0; j < i; j++) {
        if (string [j] == 'b') {
            string [j] = 'a';
        } 
        else if (string [j] == 'a') {
            string [j] = 'b';
        }
        if (string [j] == 'B') {
            string [j] = 'A';
        }
        else if (string [j] == 'A') {
            string [j] = 'B';
        }
    }
    for (j = 0; j < i; j++) {
        fprintf (f, "%c", string [j]); 
    }
    fclose (f);
    return 0;  
}