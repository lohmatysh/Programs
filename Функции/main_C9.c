#include<stdio.h>

int factorial(int a);

int main () {
    int num;
    scanf("%d", &num);
    factorial(num);
    return 0;
} 

int factorial(int a) {
    int i = 1;
    int s = 1;

    for (i = 1; i <= a; ++i) {
        s = s * i;
    }
    printf("%d", s);
    return s;
}