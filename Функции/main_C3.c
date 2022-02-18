#include<stdio.h>

int middle(int a, int b);

int main () {
    int num_1, num_2;
    scanf("%d %d", &num_1, &num_2);
    middle(num_1, num_2);
    return 0;
} 

int middle(int a, int b) {
    int m = 0;
    m = (a + b) / 2;
    printf("%d", m);
    return m;
}