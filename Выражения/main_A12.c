#include<stdio.h>

int main () {

int i, sum, num, array_nums[3];

scanf("%d", &num);

sum = 0;
i = 0 ;

for (i=0; i<3; i++) {
    array_nums[i] = num % 10;
    num = num / 10;
    sum = sum + array_nums[i]; 
    }
    
printf("%d", sum);
return 0;
}