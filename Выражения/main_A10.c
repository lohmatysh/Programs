#include<stdio.h>

int main () {

int i, c, min, array_nums[5];

for (i=0; i<5; i++) {
    scanf("%d", &array_nums[i]);
}
min = array_nums[0];

for (c=0; c<5; c++) {
    if (array_nums[c] < min) {
        min = array_nums[c];
    }
}
printf("%d", min);
return 0;
}