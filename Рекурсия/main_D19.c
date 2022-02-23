#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int acounter(void);

int main() {
    int number = 0;
    number = acounter();
    printf("%d", number);
    return 0;
} 

int acounter(void) {
    char ch;
    static int i = 0;
    scanf ("%c", &ch); //ввод очередного символа
    if (ch != '.') {
        if (ch == 'a'){
            i++;
        }
        acounter(); //рекурсивный вызов для обработки оставшихся символов
    }
    else {
        return i;
    }
}