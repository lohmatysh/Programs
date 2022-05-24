#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void delete_char(char *string, int m, int n);

char string [1001] = {0};
char c = 0;
int i = 0, j = 0, k = 0, num = 0, s = 0;
FILE *f;

int main() {
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 0; j < i; j++) {
        for (k = 0; k < i; k++) {
            if ((string[k] == ' ') && (string[k + 1] == ' ')) {
                delete_char(string, i, k);
                s++;
            }
        }
        k++;
    }
    if (string[0] == ' ') {
        delete_char(string, i, 0);
        s++;
    }
    for (int m = 0; m < i - s; m++) {
        fprintf(f, "%c", string[m]);
    }
    fclose (f);
    return 0;  
}

void delete_char(char *string, int m, int n) {
    for (int i = n; i <= m + 1; i++) {
        string[i] = string [i + 1];
    }
}