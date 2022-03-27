#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1100] = {0};
    int nums [1100] = {0};
    char c = 0;
    int i = 0, j = 0, k = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 0; j < i - 1; j++) {
        if (string [i - 1] == string [j]) {
            nums [k] = j;
            k++;
        }
    }
    for (j = 0; j < k; j++) {
        fprintf (f, "%d ", nums [j]); 
    }
    fclose (f);
    return 0;  
}