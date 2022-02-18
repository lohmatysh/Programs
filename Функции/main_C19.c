#include<stdio.h>

int digit_to_num(char a);

int main () {
    char a;
    digit_to_num(a);
    return 0;
} 

int digit_to_num(char a) {
    int b = 0;
    int i = 0;
    while (a != '.') {
        scanf("%c", &a);
        if (48 <= a && a <= 57) { 
            b = a - 48;
            i = i + b; 
            /* printf("%d %d\n", i, b); */
        } 
    }
    printf("%d", i);
    return i;
}