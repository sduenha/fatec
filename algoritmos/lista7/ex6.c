#include <stdio.h>

double media(double vet[], int n, int *i) {

    double media = 0;

    for (int i = 0; i < n; i++) {
        media += vet[i];
    }

    media /= n;

    double dif = media - vet[0];
    if (dif < 0) dif = dif * -1;
    double new_dif = dif;
    *i = 0;
    for (int j = 1; j < n; j++) {
        new_dif = media - vet[j]; 
        if (new_dif < 0) new_dif = new_dif * -1;
        if (new_dif < dif) {
            dif = media - vet[j];
            *i = j;
        }
    }

    return media;
}

int main() {
    int n = 10;
    double vet[10] = {2, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    double med = media(vet, n, &i);

    printf("Media %.2f, valor mais próximo: %.2f, posição: %d\n", med, vet[i], i);
}