#include <stdio.h>
#include <string.h>
 
int main()
{
    char st1[80], palavra[40], escolha[40];
    int i = 0, j = 0, palavras = 0, palavras_iguais = 0;
    printf("Escreve uma frase de no máximo 79:" );
    fgets(st1, 80, stdin);
    printf("Escolha uma palavra: ");
    scanf("%c", escolha);
    while (st1[i] != "\n" && st1[i] != "\0") {
        if (st1[i] == " ") {
            i++;
        }
        while (st1 != " " && st1 != "\n" && st1 != "\0") {
            j = 0;
            palavra[j] = st1[i];
            j++;
            i++;
            palavras++;
        }
        if (strcmp(escolha, palavra) == 0) {
            palavras_iguais ++;
        }
    }
    printf("Quantidade de palavras: %d", &palavras);
    printf("Quantidade de palavras iguais: %d", &palavras_iguais);

    return 0;
}