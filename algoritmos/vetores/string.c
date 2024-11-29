#include <stdio.h>

int main(void) {
    char string[80], reversa[80];
    int length = 0, counter = 0, j = 0;

    printf("Digite 79 caracteres: ");
    scanf("%s", string);

    while (string[length] != '\0') {
        length ++;
    }

    for (int i = 0, j = length - 1; i < length; i++, j--) {
        reversa[i] = string[j];
    }
    reversa[length] = '\0';

    j = 0;
    while (reversa[j] != '\0') {
        printf("%c", reversa[j]);
        j++;
    }
    printf("\n");

    j = 0;
    while (string[j] != '\0') {
        printf("%c", string[j]);
        j++;
    }
    printf("\n");
}