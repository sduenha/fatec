// O programa recebe os valores de um jogo da velha e retorna quem foi o vencedor
// O programa recebe os valores em ordem de colunas
// O programa retorna quem foi o vencedor ou se empatou
// Samuel Melo Muzy Rehder Duenha - RA: 2760482421016
// Yan Almeida Mazzucatto - RA: 2760482421017
#include <stdio.h>

int main(void) {
    // Declarando as variáveis
    char v1, v2, v3, v4, v5, v6, v7, v8, v9;
    char test = 'X';

    // Pedindo ao usuário os valores do jogo
    printf("Digite o jogo: \n");
    scanf("%c %c %c %c %c %c %c %c %c", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9);

    // Iniciando um for para verificar as possíbilidades
    for (int i = 0; i < 2; i ++) {
        // Verificando todas as possibilidades de vitória
        if ((v1 == test && v2 == test && v3 == test) || (v4 == test && v5 == test && v6 == test) || (v7 == test && v8 == test && v9 == test) || (v1 == test && v4 == test && v7 == test) || (v2 == test && v5 == test && v8 == test) || (v3 == test && v6 == test && v9 == test) || (v1 == test && v5 == test && v9 == test) || (v3 == test && v5 == test && v7 == test) ) {
            printf("%c ganhou!\n", test);
            return 0;
        }
        // Trocando o verificador de vitória
        test = 'O';
    }
    // Printando empate caso em cima não dê certo
    printf("Empatou!\n");
}