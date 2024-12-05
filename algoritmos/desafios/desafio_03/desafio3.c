// Objetivos do código: Verificar se a senha fornecida pelo usuário segue os padrões pedidos, que são: ter pelo menos 8 caracteres, uma letra minúscula, uma maiúscula, um número, um dos seguintes símbulos: !, ?, #, @, $, não ser um palíndromo e não conter palavras reservadas, as quais são fornecidas pelo usuário.

// Entradas: Primeiro pede o número de palavras reservadas, depois as palavras reservadas uma por linha e por fim a senha.

// Saídas: Se a senha não infríngir nenhum requisito o programa retorna "ok", caso contrário o programa retorna quais requisitos não foram cumpridos

// Alunos: Samuel Melo Muzy Rehder Duenha (RA: 2760482421016)

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    // Declaração de variáveis
    char senha[50], inversa[50], dicionario[50][20], erros[7][50];
    int num_dicionario, tamanho_senha, count_erros = 0, verificacao[4] = {0, 0, 0, 0}, j;

    // Pedindo ao usuário o número de palavras do dicionário
    printf("Quantas palavra terá o dicionário? ");
    scanf("%d", &num_dicionario);

    // Adicionando as palavras ao dicionário
    printf("Digite as palavras, uma por linha: \n");
    for (int i = 0; i < num_dicionario; i ++) {
        scanf("%s", dicionario[i]);
    }

    // Pedindo a senha do usuário
    printf("Digite a sua senha: ");
    scanf("%s", senha);

    // Descobrindo o tamanho da senha
    tamanho_senha = strlen(senha);

    // Faz a verificação do tamanho
    if (tamanho_senha < 8) {
        printf("A senha deve conter pelo menos 8 caracteres\n");
        count_erros ++;
    }

    // Itera por toda a senha para fazer as verificações de minúscula, maiúscula, número e símbulo
    // Aproveia a iteração para escrever a inversa
    for (int i = 0, j = tamanho_senha - 1; i < tamanho_senha; i ++, j --) {
        if (islower(senha[i])) {
            verificacao[0] = 1;
        } else if (isupper(senha[i])) {
            verificacao[1] = 1;
        } else if (isdigit(senha[i])) {
            verificacao[2] = 1;
        } else if(senha[i] == '!' || senha[i] == '?' || senha[i] == '#' || senha[i] == '@' || senha[i] == '$') {
            verificacao[3] = 1;
        }
        inversa[i] = senha[j];
    }
    // Adiciona o \0 a string inversa
    inversa[tamanho_senha] = senha[tamanho_senha];

    // Faz os prints dos erros de minúscula, maiúscula, número e símbulo
    if (verificacao[0] == 0) {
        printf("A senha deve conter pelo menos uma letra maiuscula\n");
        count_erros ++;
    }
    if (verificacao[1] == 0) {
        printf("A senha deve conter pelo menos uma letra minuscula\n");
        count_erros ++;
    }
    if (verificacao[2] == 0) {
        printf("A senha deve conter pelo menos um numero\n");
        count_erros ++;
    }
    if (verificacao[3] == 0) {
        printf("A senha deve conter pelo menos um simbolo\n");
        count_erros ++;
    }

    // Verifica se é um palíndromo
    if (!strcmp(senha, inversa)) {
        printf("A senha e um palindromo\n");
        count_erros ++;
    }

    // Itera por cada palavra no dicionário e ve se tem na senha
    // Se encontrar uma quebra o loop
    for (int i = 0; i < num_dicionario; i ++) {
        if (strcasestr(senha, dicionario[i])) {
            printf("A senha nao pode conter palavras reservadas\n");
            count_erros ++;
            break;
        }
    }

    //  Verifica se encontrou erros, se não printa ok
    if (count_erros == 0) {
        printf("ok\n");
    }
}