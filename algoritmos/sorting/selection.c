#include <stdio.h>

int encontraMenor(int *vet, int posicao) {
    int min = posicao;
    for (int i = posicao + 1; i < 6; i++) {
        if (vet[i] < vet[min]) {
            min = i;
        }
    }

    return min;
}

int trocaNum(int posica_menor, int ida, int *vet) {
    int aux = vet[ida];

    vet[ida] = vet[posica_menor];
    
    vet[posica_menor] = aux;
}

int main(void) {
    int vet[6] = {5, 3, 2, 1, 90, 6};
    int posicao_menor;

    for (int i = 0; i < 6; i ++) {
        posicao_menor = encontraMenor(vet, i);
        trocaNum(posicao_menor, i, vet);
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");
}