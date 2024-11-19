#include <stdio.h>
#define MAX 10

int main(void) {

    double mat1[MAX][MAX];
    double transposta[MAX][MAX];
    int i, j, n;

    printf("Dimensões das matrizes (max. 10): ");
    scanf("%d", &n);

    printf("Lendo os dados da matriz 1, linha por linha\n");
    for (i = 0; i <  n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &mat1[i][j]);
        }
    }

    for (i = 0; i < n; i ++) {
        for (j = 0; j < n; j++) {
            transposta[j][i] = mat1[i][j];
        }
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2lf ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2lf ", transposta[i][j]);
        }
        printf("\n");
    }
}