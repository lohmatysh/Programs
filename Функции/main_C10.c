#include <stdio.h>
#include <inttypes.h>

int simple(int a);

int main () {
    int a = 0;
    simple(a);
    return 0;
} 

int simple(int a) {
    uint32_t n, i=2;
    scanf("%" PRIu32 , &n);
    while(i<=n) {
        if(n%i == 0) {
            printf("%" PRIu32 " ",i);
            n/=i;
        } 
        else {
            i++;
        }
    }
    printf("\n");
    return 0;
}