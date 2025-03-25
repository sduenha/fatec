#include <stdio.h>

int main (void) {
    int vetor_inteiro[7] = {1, 2, 3, 4, 5, 6, 7};

    int num = 5;

    int len = sizeof(vetor_inteiro)/sizeof(int);
    int meio, ini = 0, fim = len;
    
    while (ini <= fim) {
        meio = (ini + fim) / 2;

        if(vetor_inteiro[meio] == num) {
            printf("%d\n", vetor_inteiro[meio]);
            return 0;
        }
        else if (vetor_inteiro[meio] > num) fim = meio - 1;
        else if (vetor_inteiro[meio] < num) ini = meio + 1;
    }
}