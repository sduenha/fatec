#include <stdio.h>

int main(void) {
    int vitorias_a, vitorias_b, saldo_a, saldo_b, gols_a, gols_b, vermelhos_a, vermelhos_b, amarelos_a, amarelos_b, vencedor_a, vencedor_b;

    printf("Informações sobre os times: \n"); 
    printf("Primeiro time: \n Vitorias: ");
    scanf("%i", &vitorias_a);
    printf(" Saldo de Gols: ");
    scanf("%i", &saldo_a);
    printf(" Gols: ");
    scanf("%i", &gols_a);
    printf(" Vermelhos: ");
    scanf("%i", &vermelhos_a);
    printf(" Amarelos: ");
    scanf("%i", &amarelos_a);

    printf("Segundo time: \n Vitorias: ");
    scanf("%i", &vitorias_b);
    printf(" Saldo de Gols: ");
    scanf("%i", &saldo_b);
    printf(" Gols: ");
    scanf("%i", &gols_b);
    printf(" Vermelhos: ");
    scanf("%i", &vermelhos_b);
    printf(" Amarelos: ");
    scanf("%i", &amarelos_b);

    if (vitorias_a == vitorias_b) {
        if (saldo_a == saldo_b) {
            if (gols_a == gols_b) {
                if (vermelhos_a == vermelhos_b) {
                    if (amarelos_a == amarelos_b) {
                        printf("Os times continuam empatados!\n");
                    } else if (amarelos_a > amarelos_b) {
                        printf("O time A vence!\n");
                    } else {
                        printf("O time B venceu!\n");
                    }
                } else if (vermelhos_a > vermelhos_b) {
                    printf("O time A venceu!\n");
                } else {
                    printf("O time B venceu!\n");
                }
            } else if (gols_a > gols_b) {
                printf("O time A venceu!\n");
            } else {
                printf("O time B venceu!\n");
            }
        } else if (saldo_a > saldo_b) {
            printf("O time A venceu!\n");
        } else {
            printf("O time B venceu!\n");
        }
    } else if (vitorias_a > vitorias_b) {
        printf("O time A venceu!\n");
    } else {
        printf("O time B venceu!\n");
    }

    return 0;
}