#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1200] = {0};
    char c = 0;
    int i = 0, size = 0, check_dot = 0, check_end = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        if (string [i] == '.') {
            check_dot = i;
            check_end = 1;
        }
        if (check_end == 1) {
            if ((string [i] >= 'a' && string [i] <= 'z') || (string [i] == '.')) {
                //printf ("%c", string [i]);
                check_end = 1;
            }
            else {
               check_end = 0;
            }
        }
        i++;
    }
    size = i;
    if ((size - check_dot) > 5 && !(check_end)) {
        string [size] = '.';
        check_dot = size;
        size++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    /*
    for (int j = 0; j < size; j++) {
        if (string [j] == '.') {
            check = j;
        }
    }
    */
    for (int j = 0; j < check_dot; j++) {
        fprintf(f, "%c", string [j]);
    }
    fprintf(f, ".html");
    fclose(f);
    return 0;  
}