#include <stdio.h>

int main(void) {
    for (char c = 'a'; c <= 'z'; ++c) {
        putchar(c);
        putchar(' ');
    }
    putchar('\n');
    return 0;
}