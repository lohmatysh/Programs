#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    _Bool check = true, no_run = true;
    char string [1001] = {0};
    char c = 0;
    int i = 0, j = 0, k = 0, max_word_lenth = 0, word_lenth = 0, max_word_inc = 0, word_inc = 0;
    FILE *f;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    string [i] = ' ';
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = 0; j <= i; j++) {
        if (string [j] != ' ') {
            word_lenth++;
            if (check)
            word_inc = j;
            check = false;
        }
        else {
            if (word_lenth == max_word_lenth) {
                no_run = false;
            }
            if (word_lenth > max_word_lenth) {
                max_word_lenth = word_lenth;
                max_word_inc = word_inc;
                no_run = true;
            }
            word_lenth = 0;
            word_inc = 0;
        }
        if (string [j] == ' ') {
            check = true;
        }
    }
    //printf("max_word_inc = %d max_word_lenth = %d\n", max_word_inc, max_word_lenth);
    if (no_run) {
        for (k = max_word_inc; k < max_word_lenth + max_word_inc; k++) {
            fprintf(f, "%c", string [k]);
        }
    }
    fclose (f);
    return 0;  
}