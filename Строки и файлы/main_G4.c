#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void swap(char *pa, char *pb);

int main() {
    FILE *f;
    char string [300] = {0};
    char letter [300] = {0};
    char c = 0, current = 0;
    int i = 0, j = 0, k = 0, l = 0, space = 0, size = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        if (c == ' ') {
            space = i;
        }
        string [i] = c;
        i++;
    }
    size = i;
    fclose (f);
    f = fopen("output.txt", "w");
    current = string [0];
    for (j = 0; j < space; j++) {
        current = string [j];
        for (k = j + 1; k < space; k++) {
            if (current == string [k]) {
                string [j] = '0';
                string [k] = '0';
            } 
        }
    }
    current = string [space];
    for (j = space; j < size; j++) {
        current = string [j];
        for (k = j + 1; k < size; k++) {
            if (current == string [k]) {
                string [j] = '0';
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
    for (j = 0; j < size; j++) {
        current = string [j];
        for (k = j + 1; k < size; k++) {
            if (current == string [k] && current != '0') {
                letter [l] = current;
                l++;
            } 
        }   
    }
    for (int j = 0; j < l - 1; j++) {
        for (int k = 0; k < l - 1 - j; k++) {
            if (letter [k] > letter [k + 1]) {
                swap(&letter [k], &letter [k + 1]);
            }
        }
    }
    for (j = 0; j < l; j++) {
        fprintf(f, "%c ", letter [j]);
    }
    fclose (f);
    return 0;  
}

void swap(char *pa, char *pb) {
    char tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}