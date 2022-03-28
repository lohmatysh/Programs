#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1000] = {0};
    char c = 0;
    int i = 0, count = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    string [i] = '.';
    fclose (f);
    f = fopen("output.txt", "w");
    for (int j = 0; j <= i; j++) {
        printf ("%c", string [j]); 
        if (string [j] == '.' || string [j] == ' ') {
            if (string [j - 1] == 'a') {
                count++;
            }
        }
    }
    fprintf (f, "%d", count); 
    fclose (f);
    return 0;  
}