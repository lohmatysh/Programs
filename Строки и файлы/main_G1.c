#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1000] = {0};
    char c = 0;
    int i = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < i; k++) {
            fprintf (f, "%c", string [k]); 
        }
        if (j < 2) {
            fprintf (f, ", "); 
        }
        if (j >= 2) {
            fprintf (f, " "); 
        }
    }
    fprintf (f, "%d\n", i); 
    fclose (f);
    return 0;  
}