#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1000] = {0};
    char c = 0;
    int i = 0, j = 0, k = 0, space = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        if (c == ' ') {
            space = i;
        }
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    
    fclose (f);
    return 0;  
}