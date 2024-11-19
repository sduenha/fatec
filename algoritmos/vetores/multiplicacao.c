#include <stdio.h>
#define MAX 10

int main(void) {
    
    double mat1[MAX][MAX];
    double mat2[MAX][MAX];
    double mult[MAX][MAX];
    int i, j, n, n1, n2, mu;

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

    for (i = 0; i < n; i ++) {
        for (j = 0; j < n; j++) {
            mult[j][i] = mat1[i][j] * mat2[i][j];
            n1 = mat1[i][j];
            n2 = mat2[i][j];
            mu = mult[j][i];
            printf("%.2lf ", mult[i][j]);
        }
        printf("\n");
    }
}