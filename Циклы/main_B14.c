#include<stdio.h>

int main (void) {
    int a, i;
    i = 0;
    while (a != 0) {
        scanf("%d", &a);
        i++;
    }  
    printf("%d", (i-1));
    return 0;
}