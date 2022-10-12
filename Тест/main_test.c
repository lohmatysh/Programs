int main(void) {
    printf("{");
    for (int i = 0; i < 1000; i +=2) {
        printf("%d, ", i);
    }
    for (int i = 1000; i > 0; i -=2) {
        printf("%d, ", i);
    }
    printf("}");
    return 0;
}