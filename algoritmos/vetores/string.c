#include <stdio.h>

int main(void) {
    char string[80];
    char reversa[80];
    int counter = 0;

    printf("Digite 79 caracteres: ");
    scanf("%s", string);

    for (int i = 78; i > 0; i--) {
        reversa[counter] = string[i];
        printf("%c\n", string[i]);
        counter++;
    }

    reversa[80] = '\0';

    for (int i = 0; i < 80; i++) {
        printf("%c", reversa[i]);
    }

    printf("\n");
}