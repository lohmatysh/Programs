#include<stdio.h>

int main (void) {
    char a;
    while (a != '.') {
        scanf("%c", &a);
        if (65 <= a && a <= 90) {
           a = a + 32; 
        }
        if (a != 46) {
           printf("%c", a); 
        }   
    }
    return 0;
}