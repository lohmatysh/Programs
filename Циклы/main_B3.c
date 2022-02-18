#include<stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    if (100 <= a && a <= 999) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
} 
