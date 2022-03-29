#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1200] = {0};
    char letter [1200] = {0};
    char c = 0, current = 0;
    int i = 0, j = 0, k = 0, l = 0, size = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    size = i;
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 0; j < size; j++) {
        current = string [j];
        for (k = j + 1; k < size; k++) {
            if (current == string [k]) {
                string [k] = '0';
            } 
        }
    }
    /*
    for (j = 0; j < size; j++) {
        printf("%c", string [j]);
    }
    printf("\n");
    */
    current = string [0];
    for (int j = 0; j < size; j++) {
        current = string [j];
        if ((current != '0') && (current != ' ')) {
            letter [l] = current;
            l++;
        }  
    }
    for (int j = 0; j < l; j++) {
        fprintf(f, "%c", letter [j]);
    }
    fclose (f);
    return 0;  
}