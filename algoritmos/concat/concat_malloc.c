#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatena(char *s1, char *s2) {
    int contador = 0;

    char *s = malloc(sizeof(s1) + sizeof(s2));

    for (int i = 0; i < strlen(s1); i++, contador++) {
        s[contador] = s1[i];
    }

    for (int i = 0; i < strlen(s2); i++, contador++) {
        s[contador] = s2[i];
    }

    s[contador] = '\0';

    return s;
}

int main(void) {
    char s1[100], s2[100];

    printf("Digite a primeira string: ");
    fgets(s1, 100, stdin);
    s1[strlen(s1)-1] = '\0';

    printf("Digite a segunda string: ");
    fgets(s2, 100, stdin);
    s2[strlen(s2)-1] = '\0';

    char *pointer = concatena(s1, s2);

    printf("%s", pointer);

    printf("\n");

    return 0;
}