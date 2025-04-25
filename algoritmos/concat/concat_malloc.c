#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatena(char *s1, char *s2) {
    int contador = 0;
    char *sres = NULL;
    int t1, t2;
    
    t1 = strlen(s1);
    t2 = strlen(s2);

    sres = malloc((t1 + t2 + 1) * sizeof(char));

    for (int i = 0; i < t1; i++, contador++) {
        sres[contador] = s1[i];
    }

    for (int i = 0; i < t2; i++, contador++) {
        sres[contador] = s2[i];
    }

    sres[contador] = '\0';

    return sres;
}

int main(void) {
    char s1[100], s2[100];
    char *pointer = NULL;

    printf("Digite a primeira string: ");
    fgets(s1, 100, stdin);
    s1[strlen(s1) - 1] = '\0';

    printf("Digite a segunda string: ");
    fgets(s2, 100, stdin);
    s2[strlen(s2) - 1] = '\0';

    pointer = concatena(s1, s2);

    printf("%s \n", pointer);
    
    free(pointer);

    return 0;
}