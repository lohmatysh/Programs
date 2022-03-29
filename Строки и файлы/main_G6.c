#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
 
int is_palindrom(char str[]);

int main() {
    FILE *f;
    char string [1000] = {0};
    char c = 0;
    int i = 0, check = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    string [i] = '.';
    fclose (f);
    f = fopen("output.txt", "w");
    check = is_palindrom(string);
    if (check == 0) {
        fprintf (f, "YES"); 
    }
    else {
        fprintf (f, "NO"); 
    }
    fclose (f);
    return 0;  
}
int is_palindrom(char str[]) {
    int h = 0, check = 0;
    while (str[h] != '.') {
        h++;
    }
    for (int i = 0; i <= h; i++) {
        if (str[h - 1] != str[i]) {
            check = 1;
        }
        h--;
    }
    return check;
}