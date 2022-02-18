#include<stdio.h>

int main () {

int i, max, num, array_nums[3];

scanf("%d", &num);

max = 0;
i = 0 ;

for (i=0; i<3; i++) {
    array_nums[i] = num % 10;
    num = num / 10;
    if (array_nums[i] > max) {
        max = array_nums[i];
    }
    }  
printf("%d", max);
return 0;
}