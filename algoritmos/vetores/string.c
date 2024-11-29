#include <stdio.h>

int main(void) {
    char string[80], reversa[80];
    int length = 0, counter = 0, j = 0;

    printf("Digite 79 caracteres: ");
    scanf("%s", string);

    while (string[length] != '\0') {
        length ++;
    }

    for (int i = 0, j = length; i < length; i++, j--) {
        reversa[i] = string[j];

    } 
    while (counter != length - 1) {
        reversa[counter] = string[length];
        counter ++;

    }

    printf("\n");
}