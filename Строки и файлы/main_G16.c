#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

_Bool compare_Ling(char *string1, int n);
void copy_string(char *string1, int m, int n); 

char string [1002] = {0};
char new_string [2002] = {0};
char word_Cao[3] = {'C','a','o'};
char word_Ling[4] = {'L','i','n','g'};
char c = 0;
int i = 0, j = 0, k = 0, s = 0;
FILE *f;

int main() {
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 0; j <= i; j++) {
        new_string[j] = string[j];
    }
    for (j = 0; j <= i; j++) {
        if (new_string [j] == 'L') {
            if (compare_Ling(new_string, j)) {
                copy_string(new_string, i, j);
                s++;
            }
        }
    }
    for (k = 0; k < i - s; k++) {
        fprintf(f, "%c", new_string[k]);
    }
    fclose (f);
    return 0;  
}

_Bool compare_Ling(char *string1, int n) {
    _Bool check = false;
    char word_Ling[4] = {'L','i','n','g'};
    for (int i = 0; i < 4; i++) {
        if (word_Ling[i] == string1[n + i]) {
            check = true;
        }
        else {
            check = false;
        }
    }
    return check;
}

void copy_string(char *string1, int m, int n) {
    char word_Cao[3] = {'C','a','o'};
    for (int i = 3; i <= m ; i++) {
        string1[i + n] = string1[i + n + 1]; 
    }
    for (int i = 0; i < 3; i++) {
        string1[i + n] = word_Cao[i];
    }
}