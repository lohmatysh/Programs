#include<stdio.h>

int main () {

int i, c, m, max, min, sum, array_nums[5];

for (i=0; i<5; i++) {
    scanf("%d", &array_nums[i]);
}
max = array_nums[0];
min = array_nums[0];
for (c=0; c<5; c++) {
    if (array_nums[c] > max) {
        max = array_nums[c];
    }
}
for (m=0; m<5; m++) {
    if (array_nums[m] < min) {
        min = array_nums[m];
    }
}
sum = min + max;
printf("%d", sum);
return 0;
}