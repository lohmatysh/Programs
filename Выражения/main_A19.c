#include <stdio.h>

int main () {
    int a, b, c, sumAB, sumAC, sumBC; 
    scanf("%d%d%d", &a, &b, &c);
    sumAB = a + b;
    sumAC = a + c;
    sumBC = c + b;
    if (sumAB > c && sumBC > a && sumAC > b && a > 0 && b > 0 && c > 0) {
        printf("YES");\
    }
    else {
        printf("NO");
    }  
    return 0;
}