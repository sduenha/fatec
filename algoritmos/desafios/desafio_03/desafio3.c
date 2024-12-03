#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char senha[50], inversa[50], dicionario[50][20], erros[7][50];
    int num_dicionario, tamanho_senha, count_erros = 0, verificacao[7];

    printf("Quantas palavra terá o dicionário? ");
    scanf("%d", &num_dicionario);

    printf("Digite as palavras, uma por linha: \n");
    for (int i = 0; i < num_dicionario; i ++) {
        scanf("%s", dicionario[i]);
    }

    printf("Digite a sua senha: ");
    scanf("%s", senha);

    tamanho_senha = strlen(senha);

    if (tamanho_senha < 8) {
        verificacao[0] = 1;
        strcpy(erros[count_erros], "A senha deve conter pelo menos 8 caracteres");
        count_erros ++;
    }

    for (int i = 0; i < tamanho_senha; i ++) {
        if (islower(senha[i])) {
            verificacao[1] = 1;
        } else if (isupper(senha[i])) {
            verificacao[2] = 1;
        } else if (isdigit(senha[i])) {
            verificacao[3] = 1;
        } else if(senha[i] == "!" || senha[i] == "?" || senha[i] == "#" || senha[i] == "@" || senha[i] == "$") {
            verificacao[4] = 1;
        }
    }
}