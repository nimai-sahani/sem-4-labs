#include <stdio.h>
#include <string.h>

int main(void) {
    char bin[256];
    unsigned long long decimal = 0;
    size_t i;

    printf("Enter a binary number: ");
    if (scanf("%255s", bin) != 1) return 1;

    for (i = 0; i < strlen(bin); ++i) {
        if (bin[i] != '0' && bin[i] != '1') {
            printf("Invalid binary digit: %c\n", bin[i]);
            return 1;
        }
        decimal = decimal * 2 + (bin[i] - '0');
    }

    printf("Decimal: %llu\n", decimal);
    return 0;
}