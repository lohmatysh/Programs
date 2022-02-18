#include<stdio.h>

int main () {

int i, mul, num, array_nums[3];

scanf("%d", &num);

mul = 1;
i = 0 ;

for (i=0; i<3; i++) {
    array_nums[i] = num % 10;
    num = num / 10;
    mul = mul * array_nums[i]; 
    }
    
printf("%d", mul);
return 0;
}