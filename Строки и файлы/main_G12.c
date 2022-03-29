#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1100] = {0};
    char c = 0;
    int i = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    string [i] = ' ';
    fclose (f);
    f = fopen("output.txt", "w");
    for (int k = 0; k <= i; k++) {
        if (string [k] != ' ') {
            fprintf (f, "%c", string [k]); 
        } 
        if (string [k] == ' ' && string [k + 1] != ' ') {
            fprintf (f, "\n"); 
        }
    }
    fclose (f);
    return 0;  
}