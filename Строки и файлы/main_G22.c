#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void delete_char(char *string, int m, int n);

char string [1000] = {0};
char c = 0;
int i = 0, j = 0, k = 0, l = 0, m = 0, num = 0;
FILE *f;

int main() {
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    string [i] = ' ';
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 1; j < i; j++) {
        for (k = 1; k < i; k++) {
            num = string[k];
            switch(num) {
                case 'a': delete_char(string, i, k); break;
                case 'e': delete_char(string, i, k); break;
                case 'h': delete_char(string, i, k); break;
                case 'i': delete_char(string, i, k); break;
                case 'o': delete_char(string, i, k); break;
                case 'u': delete_char(string, i, k); break;
                case 'w': delete_char(string, i, k); break;
                case 'y': delete_char(string, i, k); break;
            }
        }
        k++;
    }
    for (j = 1; j < i; j++) {
        num = string[j];
        switch(num) {
            case 'b': string[j] = '1'; break;
            case 'f': string[j] = '1'; break;
            case 'p': string[j] = '1'; break;
            case 'v': string[j] = '1'; break;
            case 'c': string[j] = '2'; break;
            case 'g': string[j] = '2'; break;
            case 'j': string[j] = '2'; break;
            case 'k': string[j] = '2'; break;
            case 'q': string[j] = '2'; break;
            case 's': string[j] = '2'; break;
            case 'x': string[j] = '2'; break;
            case 'z': string[j] = '2'; break;
            case 'd': string[j] = '3'; break;
            case 't': string[j] = '3'; break;
            case 'l': string[j] = '4'; break;
            case 'm': string[j] = '5'; break;
            case 'n': string[j] = '5'; break;
            case 'r': string[j] = '6'; break;
        }
    }
    for (j = 1; j < i; j++) {
        for (k = 1; k < i; k++) {
            if (string[k] == string[k + 1]) {
                delete_char(string, i, k);
            }
        }
        k++;
    }
    for (j = 0; j < 4; j++) {
        if (!((string[j] >= 'a' && string[j] <= 'z') || (string[j] >= '0' && string[j] <= '9'))) {
            string[j] = '0';
        }
    }
    for (j = 0; j < 4; j++) {
        fprintf(f, "%c", string[j]);
    }
    fclose (f);
    return 0;  
}

void delete_char(char *string, int m, int n) {
    for (int i = n; i <= m + 1; i++) {
        string[i] = string [i + 1];
    }
}