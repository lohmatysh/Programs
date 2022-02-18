#include<stdio.h>

int power(int base, int n);

int main () {
    int num, power_num;
    scanf("%d %d", &num, &power_num);
    power(num, power_num);
    return 0;
} 

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 0; i < n; ++i) {
        p = p * base;
    }
    printf("%d", p);
    return p;
}