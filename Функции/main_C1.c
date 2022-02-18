#include<stdio.h>

int module(int a);

int main () {
    int num;
    scanf("%d", &num);
    if (num <= 0) {
        module(num);
    }
    else {
        printf("%d", num);
    }
    return 0;
} 

module (int a) {
    a = a * (-1);
    printf("%d", a);
    return a;
}