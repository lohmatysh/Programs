#include<stdio.h>

int func_max(int num);

int main (void) {
    int a, b, max;
    b = max = 0;
    while (a != 0) {
        scanf("%d", &a);
        b = func_max(a);
        if (b > max) {
            max = b;
        }
    }
    printf("%d", max);
    return 0;
} 

int func_max(int num) {
    int func = 0;
    if (num < -2) {
        func = 4;
    }    
    else if (-2 <= num && num < 2) {
        func = (num * num);
    }    
    else {
        func = (num * num) + (4 * num) + 5;
    }     
    return func;
}