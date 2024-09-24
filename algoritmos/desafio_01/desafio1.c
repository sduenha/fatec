#include <stdio.h>

int main(void) {
    char v1, v2, v3, v4, v5, v6, v7, v8, v9;

    printf("Digite o jogo: \n");
    scanf("%c %c %c %c %c %c %c %c %c", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9);

    printf("%c %c %c\n", v1, v2, v3);

    if (v1 == 'X' || v2 == 'X' || v3 == 'X') {
        printf("x ganhou!");
    }
}