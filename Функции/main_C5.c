#include<stdio.h>

int sum(int a);

int main () {
    int num;
    scanf("%d", &num);
    sum(num);
    return 0;
} 

int sum(int a) {
    int i = 0;
    int s = 0;

    for (i = 0; i <= a; ++i) {
        s = s + i;
    }
    printf("%d", s);
    return s;
}