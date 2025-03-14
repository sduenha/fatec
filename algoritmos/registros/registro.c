#include <stdio.h>

#define SIZE 3

typedef struct Registros {
    int vetor[SIZE];
    int soma;
} Registros;

Registros leRegistro() {
    Registros registro;
    for (int i = 0; i < SIZE; i ++) {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &registro.vetor[i]);
    }
    return registro;
}

Registros somaValoresVetor(Registros registro) {
    int soma = 0;
    for (int i = 0; i < SIZE; i++) {
        soma += registro.vetor[i];
    }

    registro.soma = soma;

    return registro;
}

void printSoma(Registros registro) {
    printf("%d\n", registro.soma);
} 

int main(void) {
    Registros registro;

    registro = leRegistro();
    registro = somaValoresVetor(registro);
    printSoma(registro);
}