#include <stdio.h>

int busca (int vet[], int tam, int chave, int posicoes[]) {
    int posicao = 0;
    for (int i = 0; i < tam; i++) {
        if (vet[i] == chave) {
            posicoes[posicao] = i;
            posicao++;
        }
    }

    return posicao;
}

int main(void) {
    int vet[7] = {1, 2, 3, 4, 5, 5, 7};
    int len = sizeof(vet)/sizeof(int);
    int num = 5;
    int posicoes[7];
    
    int aparicoes = busca(vet, len, num, posicoes);
    printf("Aparições: %d\n", aparicoes);

    for (int i = 0; i < aparicoes; i++) {
        printf("%d, ", posicoes[i]);
    }
    printf("\n");
}