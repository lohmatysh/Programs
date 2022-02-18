#include<stdio.h>

int text(char a);

int main () {
    char a;
    text(a);
    return 0;
} 

int text(char a) {
    while (a != '.') {
        scanf("%c", &a);
        if (97 <= a && a <= 122) {
           a = a - 32; 
        }
        if (a != 46) {
           printf("%c", a); 
        }   
    }
    return a;
}