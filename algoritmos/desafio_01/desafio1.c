#include <stdio.h>

int main(void) {
    char v1, v2, v3, v4, v5, v6, v7, v8, v9;
    char x = "x";
    char O = "O";
    char vazio = "-";

    printf("Digite o jogo: \n");
    scanf("%c %c %c %c %c %c %c %c %c", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9);
    
    if (v1 == x) {
        printf("x ganhou!");
    }
}