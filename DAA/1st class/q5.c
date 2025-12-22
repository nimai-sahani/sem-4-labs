#include <stdio.h>
int det2x2(int a, int b, int c, int d) {
    return a * d - b * c;
}
int cofactor(int A[3][3], int p, int q) {
    int sub[2][2];
    int r = 0, s = 0;
    for (int i = 0; i < 3; i++) {
        if (i == p) continue;
        s = 0;
        for (int j = 0; j < 3; j++) {
            if (j == q) continue;
            sub[r][s] = A[i][j];
            s++;
        }
        r++;
    }

    int sign = ((p + q) % 2 == 0) ? 1 : -1;
    return sign * det2x2(sub[0][0], sub[0][1], sub[1][0], sub[1][1]);
}
void adjoint(int A[3][3], int adj[3][3]) {
    int cof[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cof[i][j] = cofactor(A, i, j);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            adj[i][j] = cof[j][i];
        }
    }
}
void printMatrix(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%6d ", M[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[3][3] = {
        {105, 46, 10},
        {46, 57, 17},
        {10,  5, 121}
    };

    int adj[3][3];

    printf("Original Matrix:\n");
    printMatrix(A);

    adjoint(A, adj);

    printf("\nAdjoint Matrix:\n");
    printMatrix(adj);

    return 0;
}