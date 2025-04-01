#include <stdio.h>

double media(double vet[], int n, int *i);

int main(void) {
    double vet[100] = {1, 2, 3, 4, 5, 7, 8, 100};
    int size = 8;
    int prox;

    double media_num = media(vet, size, &prox);
    printf("%.2f\n", media_num);
    printf("%d (%.2f)\n", prox, vet[prox]);
}

double media(double vet[], int n, int *i) {
    double media;
    for (int i = 0; i < n; i++) {
        media += vet[i];
    }

    media /= n;

    double menor;
    double distancia;
    double index_menor = 0;

    if (vet[0] > media) {
        menor = vet[0] - media;
    } else {
        menor = media - vet[0];
    }

    for (int i = 1; i < n; i++) {

        if (vet[i] >  media) {
            distancia = vet[i] - media;
        } else {
            distancia = media - vet[i];
        }

        if (distancia < menor) {
            menor = distancia;
            index_menor = i;
        }
    }

    *i = index_menor;

    return media;
}