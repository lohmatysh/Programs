#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [110] = {0};
    char name [100] = {0};
    char surname [100] = {0};
    char c = 0;
    int i = 0, j = 0, k = 0, name_num = 0, surname_num = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    while (string [j] != ' ') {
        surname [j] = string [j];
        j++;
    }
    surname_num = j;
    j++;
    while (string [j] != ' ') {
        name [k] = string [j];
        j++;
        k++;
    }
    name_num = k;
    fprintf(f, "Hello, ");
    for (int n = 0; n < name_num; n++ ) {
        fprintf(f, "%c", name [n]);
    }
    fprintf (f, " ");
    for (int s = 0; s < surname_num; s++ ) {
        fprintf(f, "%c", surname [s]);
    }
    fprintf (f, "!");
    fclose(f);
    return 0;  
}