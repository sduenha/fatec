#include <stdio.h>

int main(void) {
    char string[80];
    char reversa[80];
    int counter = 0;

    printf("Digite 79 caracteres: ");
    scanf("%s", string);

    for (int i = 80; i > 0; i--) {
        reversa[counter] = string[i];
        counter++;
    }

}