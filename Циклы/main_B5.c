#include<stdio.h>

int main (void) {
    int a, i, j, sum, num;
    scanf("%d", &a);
    num = a;
    sum = 0;
    i = 0;
    j = 0;
    do {
        a = a / 10;
        i++;
    }  while (!(a == 0)) ;
    int array_nums[j];  
    do {
        array_nums[j] = num % 10;
        num = num / 10;
        sum = sum + array_nums[j];
        j++;
    }  while (!(j == i));
    printf("%d", sum);
    return 0;
}