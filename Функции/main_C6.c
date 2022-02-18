#include<stdio.h>

int power(int n);

int main () {
    int num;
    scanf("%d", &num);
    power(num);
    return 0;
} 

int power(int n) {
    long long unsigned int p, s;
    int i;
    i = 0;
    p = 1;
    s = 0;
    if (n != 0) {
        for (i = 0; i < n; i++) {
        p = p + s;
        s = p;
    }
    }
    else {
        p = 0;
    }
    printf("%llu", p);
    return p;
}