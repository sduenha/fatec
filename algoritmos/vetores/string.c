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
        printf("Entrou");
        reversa[i] = string[j];
        printf("%c", reversa[i]);
    }
    printf("%d\n", length);
    reversa[length] = '\0';

    j = 0;
    while (reversa[j] != '\0') {
        printf("%c", reversa[j]);
        printf("Sim");
        j++;
    }

    j = 0;
    while (string[j] != '\0') {
        printf("%c", string[j]);
        j++;
    }
    

    printf("\n");
}