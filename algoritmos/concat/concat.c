#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatena(char *s1, char *s2, char *res) {
    int contador = 0;

    for (int i = 0; i < strlen(s1); i++, contador++) {
        res[contador] = s1[i];
    }

    for (int i = 0; i < strlen(s2); i++, contador++) {
        res[contador] = s2[i];
    }

    res[contador] = '\0';
}

int main() {
    char s1[100], s2[100], sres[200];

    fgets(s1, 100, stdin);
    s1[strlen(s1)-1] = '\0';
    fgets(s2, 100, stdin);
    s2[strlen(s2)-1] = '\0';

    concatena(s1, s2, sres);

    for (int i = 0; i < strlen(sres); i++) {
        printf("%c", sres[i]);
    }

    printf("\n");

    return 0;
}