#include <stdio.h>

int main(void) {
    int num;

    printf("Escolha um prato:\n");
    printf("1: Salmão\n");
    printf("2: Filé Mignon\n");
    printf("3: Tilápia\n");
    printf("4: Carré de Cordeiro\n");
    printf("5: Sair do menu\n");

    do {
        printf("Escolha: ");
        scanf("%d", &num);

        if (num == 1) {
            printf("O Salmão foi escolhido!\n");
        } else if (num == 2) {
            printf("O Filé Mignon foi escolhido!\n");
        } else if (num == 3) {
            printf("A Tilápia foi escolhida!\n");
        } else if (num == 4) {
            printf("O Carré de Cordeiro foi escolhido!\n");
        } else if (num == 5) {
            break;;
        }
    }
    while (num != 5);
}
