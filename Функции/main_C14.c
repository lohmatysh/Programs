#include<stdio.h>

int sum(int num);

int main () {
    int a = 0;
    scanf("%d", &a);
    sum(a);
    return 0;
} 

int sum(int num) {
    int a, b, sum;
    a = num;
    b = sum = 0;
    while (a !=0 ) {
        b = a % 10;
        sum = sum + b;
        a = a / 10;
    }
    if ((sum % 2) == 0) {
        printf("YES");
    }
    else {
        printf("NO");  
    }
    return 0;
}