#include<stdio.h>

int text(char a);

int main () {
    char a;
    text(a);
    return 0;
} 

int text(char a) {
    int i = 0;
    while (a != '.') {
        scanf("%c", &a);
        if (48 <= a && a <= 57) {
           ++i; 
        } 
    }
    printf("%d", i);
    return i;
}