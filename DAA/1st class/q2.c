#include <stdio.h>
int main() {
    int matrix[4][4];
    int i, j;

    printf("Enter 16 values (0-255) for the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int value;
            printf("Value for element [%d][%d]: ", i, j);
            scanf("%d", &value);
            while (value < 0 || value > 255) {
                printf("Please enter a value between 0 and 255:\n");
                scanf("%d", &value);
            }
            matrix[i][j] = value;
        }
    }
return 0;
}