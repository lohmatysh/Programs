#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
#include <cstring>
 
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
    int check = 0;
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            check = 1;
        }
    }
    return check;
}