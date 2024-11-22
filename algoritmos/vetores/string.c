#include <stdio.h>

int main(void) {
    char string[80];
    char reversa[80];
    int counter = 79;
    int reverso_counter = 0;

    printf("Digite 79 caracteres: ");
    scanf("%s", string);

    while (string[counter] != '\0') {
        reversa[reverso_counter] = string[counter];
        counter --;
        reverso_counter++;
    }
    
    reversa[80] = '\0';

    for (int i = 0; i < 80; i++) {
        printf("%c", reversa[i]);
    }

    printf("\n");
}