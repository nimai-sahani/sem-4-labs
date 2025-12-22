#include <stdio.h>
char read_char(void);
void print_ascii(char ch);

int main(void) {
    char ch = read_char();
    print_ascii(ch);
    return 0;
}

char read_char(void) {
    char ch = '\0';
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) ch = '\0';
    return ch;
}

void print_ascii(char ch) {
    printf("ASCII value: %d\n", (unsigned char)ch);
}