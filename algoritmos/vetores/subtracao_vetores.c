#include <stdio.h>
#define MAX 10

int main(void) {

    double mat1[MAX][MAX];
    double mat2[MAX][MAX];
    double mat3[MAX][MAX];
    int i, j, n;

    printf("Dimensões das matrizes (max. 10): ");
    scanf("%d", &n);

    printf("Lendo os dados da matriz 1, linha por linha\n");
    for (i = 0; i <  n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &mat1[i][j]);
        }
    }

    printf("Lendo os dados da matriz 2, linha por linha\n");
    for (i = 0; i <  n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &mat2[i][j]);
        }
    }

    for (i = 0; i <  n; i++) {
        for (j = 0; j < n; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2lf ", mat3[i][j]);
        }
        printf("\n");
    }
}