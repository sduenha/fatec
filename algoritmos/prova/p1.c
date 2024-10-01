#include <stdio.h>

int main(void) {
    int eleitor1, eleitor2, eleitor3, eleitor4;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, sequencia1 = 0, sequencia2 = 0, sequencia3 = 0;

    printf("Eleitor 1, selecione o seu candidato: ");
    scanf("%i", &eleitor1);
    if (eleitor1 == 1) {
        candidato1 ++;
    } else if (eleitor1 == 2) {
        candidato2 ++;
    } else if (eleitor1 == 3) {
        candidato3 ++;
    }

    printf("Eleitor 2, selecione o seu candidato: ");
    scanf("%i", &eleitor2);
    if (eleitor2 == 1) {
        if (eleitor2 == eleitor1) {
            sequencia1 ++;
        }
        candidato1 ++;
    } else if (eleitor2 == 2) {
        if (eleitor2 == eleitor1) {
            sequencia2 ++;
        }
        candidato2 ++;
    } else if (eleitor2 == 3) {
        if (eleitor2 == eleitor1) {
            sequencia3 ++;
        }
        candidato3 ++;
    }

    printf("Eleitor 3, selecione o seu candidato: ");
    scanf("%i", &eleitor3);
    if (eleitor3 == 1) {
        if (eleitor3 == eleitor2) {
            sequencia1 ++;
        }
        candidato1 ++;
    } else if (eleitor3 == 2) {
        if (eleitor3 == eleitor2) {
            sequencia2 ++;
        }
        candidato2 ++;
    } else if (eleitor3 == 3) {
        if (eleitor3 == eleitor2) {
            sequencia3 ++;
        }
        candidato3 ++;
    }

    printf("Eleitor 4, selecione o seu candidato: ");
    scanf("%i", &eleitor4);
    if (eleitor4 == 1) {
        if (eleitor4 == eleitor3) {
            sequencia1 ++;
        }
        candidato1 ++;
    } else if (eleitor4 == 2) {
        if (eleitor4 == eleitor3) {
            sequencia2 ++;
        }
        candidato2 ++;
    } else if (eleitor4 == 3) {
        if (eleitor4 == eleitor3) {
            sequencia3 ++;
        }
        candidato3 ++;
    }

    if (candidato1 > candidato2 && candidato1 > candidato3) {
        printf("O candidato 1 venceu!\n");
    } else if (candidato2 > candidato1 && candidato2 > candidato3) {
        printf("O candidato 2 venceu!\n");
    } else if (candidato3 > candidato1 && candidato3 > candidato2) {
        printf("O candidato 3 venceu!\n");
    } else if (candidato1 == candidato2) {
        if (sequencia1 > sequencia2) {
            printf("O candidato 1 venceu!\n");
        } else if (sequencia1 < sequencia2) {
            printf("O candidato 2 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
    } else if (candidato1 == candidato3) {
        if (sequencia1 > sequencia3) {
            printf("O candidato 1 venceu!\n");
        } else if (sequencia1 < sequencia3) {
            printf("O candidato 3 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
    } else if (candidato2 == candidato3) {
        if (sequencia2 > sequencia3) {
            printf("O candidato 2 venceu!\n");
        } else if (sequencia2 < sequencia3) {
            printf("O candidato 3 venceu!\n");
        } else {
            printf("Empatou!\n");
        }
    } 
}