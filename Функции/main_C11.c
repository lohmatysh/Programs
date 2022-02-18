#include<stdio.h>

int nod(int num_1, int num_2);

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    nod(a, b);
    return 0;
} 

int nod(int num_1, int num_2) {
    while (num_1 != 0 && num_2 != 0) {
        if (num_1 >= num_2) {
            num_1= num_1 % num_2;
        }
        else {
            num_2= num_2 % num_1;
        }
    }
    printf("%d", (num_1 + num_2));
    return 0;
}