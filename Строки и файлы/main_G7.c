#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1100] = {0};
    char c = 0;
    int i = 0, j = 0, little = 0, big = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 0; j < i; j++) {
        if (string [j] >= 97 && string [j] <= 122) {
            little++;
        } 
        else if (string [j] >= 65 && string [j] <= 90) {
            big++;
        }
    }
    fprintf (f, "%d %d", little, big); 
    fclose (f);
    return 0;
}