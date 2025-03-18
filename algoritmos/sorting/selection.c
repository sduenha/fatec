#include <stdio.h>

int encontraMenor(int *vet, int posicao) {
    int min = posicao;
    for (int i = posicao; i < 5 - posicao; i++) {
        if (vet[i + 1] < vet[i]) {
            min = i;
        }
    }

    return min;
}

int trocaNum(int menor, int maior, int *vet) {
    int aux = vet[menor];

    vet[menor] = vet[maior];
    
    vet[maior] = aux;
}

int main(void) {
    int vet[5] = {5, 3, 2, 1, 90, 6};
    int posicao_menor;

    for (int i = 0; i < 5; i ++) {
        posicao_menor = encontraMenor(vet, i);
        trocaNum(posicao_menor, i, vet);
    }
}