#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

_Bool is_palindrom(char *string, int n);

char string [1001] = {0};
char c = 0;
int i = 0, j = 0, k = 0;
FILE *f;

int main() {
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    if (is_palindrom(string, i)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    fclose (f);
    return 0;  
}

_Bool is_palindrom(char *string, int n) {
    _Bool check = false;
    int num = 0, even = 0, odd = 0;
    int alpabet[26] = {0};
    for (int i = 0; i < n; i++) {
        num = string[i] - 'a';
        alpabet[num]++;
    }
    for (int j = 0; j < 26; j++) {
        if (alpabet[j] % 2 == 0) {
            odd++;
        }
        if (alpabet[j] % 2 != 0) {
            even++;
        }
    }
    if (even > 1) {
        check = false;
    }
    else {
        check = true;
    }
    return check;
}