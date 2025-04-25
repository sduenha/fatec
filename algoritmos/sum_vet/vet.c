#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size, posicao, i;
    double *v1 = NULL, *v2 = NULL, soma;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);
    printf("\n");

    v1 = malloc(size * sizeof(double));
    v2 = malloc(size * sizeof(double));

    if (v1 == NULL || v2 == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    for (i = 0; i < size; i++) {
        posicao = i + 1;
        printf("Digite o %d número de v1: ", posicao);
        scanf("%lf", &v1[i]);
        
        printf("Digite o %d número de v2: ", posicao);
        scanf("%lf", &v2[i]);

        soma += v1[i] + v2[i];

        printf("\n");
    }

    printf("%lf\n", soma);

    free(v1);
    free(v2);

    return 0;
}