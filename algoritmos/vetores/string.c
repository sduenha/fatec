#include <stdio.h>

int main(void) {
    char string[80];
    char reversa[80];
    int length = 0;
    int counter = 0;

    printf("Digite 79 caracteres: ");
    scanf("%s", string);

    while (string[length] != '\0') {
        length ++;
    }

    while (counter != length - 1) {
        reversa[counter] = string[length];
        counter ++;
    }

    
    printf("\n");
}