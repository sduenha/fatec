#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char senha[50], inversa[50];
    int num_dicionario;

    printf("Quantas palavra terá o dicionário? ");
    scanf("%d", &num_dicionario);

    char dicionario[num_dicionario];
    printf("Digite as palavras, uma por linha: \n");
    for (int i = 0; i < num_dicionario; i ++) {
        scanf("%s", dicionario[i]);
    }
}