#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

float sinus(float n);

int main() {
    int n;
    scanf("%d", &n);
    sinus(n);
    return 0;
} 

float sinus(float n) {
    _Bool isSub = true;
    int i = 1;
    float fact = 1.0;
    float mul = 1.0;
    float sum = 0.0;
    float current = 0.0;
    float x = (n * 3.141592) / 180.0;
    for (i = 1; i <= n; i++) {
        mul = mul * x;
        fact = fact * i;
        current = mul / fact;
        /* printf("i = %d fact = %f mul = %f current = %f sum = %f\n", i, fact, mul, current, sum); */
        if (isSub && (i % 2 != 0)) {
            sum = sum + current;
            isSub = false;
        }
        else if (isSub == false && (i % 2 != 0)) {
            sum = sum - current;
            isSub = true;
        }
    }
    printf("%.3f", sum);
    return 0;
}