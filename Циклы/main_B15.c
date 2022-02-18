#include<stdio.h>

int main (void) {
    int a, even, num, check;
    even = 0;
    num = 0;
    check = 0;
    while (a != 0) {
        scanf("%d", &a);
        num = a;
        check = num % 2;
        if (check == 0) {
            even++;
        }
    }  
    printf("%d", (even - 1));
    return 0;
}