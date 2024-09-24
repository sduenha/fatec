#include <stdio.h>

int main(void) {
    char v1, v2, v3, v4, v5, v6, v7, v8, v9;
    char test = 'X';

    printf("Digite o jogo: \n");
    scanf("%c %c %c %c %c %c %c %c %c", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9);

    for (int i = 0; i < 2; i ++) {
        if ((v1 == test && v2 == test && v3 == test) || (v4 == test && v5 == test && v6 == test) || (v7 == test && v8 == test && v9 == test) || (v1 == test && v4 == test && v7 == test) || (v2 == test && v5 == test && v8 == test) || (v3 == test && v6 == test && v9 == test) || (v1 == test && v5 == test && v9 == test) || (v3 == test && v5 == test && v7 == test) ) {
            printf("%c ganhou!\n", test);
            return 0;
        }
        test = 'O';
    }
    printf("Empate!");
}