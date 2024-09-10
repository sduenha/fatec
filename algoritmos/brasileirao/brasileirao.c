#include <stdio.h>

int main(void) {
    int vitoria_a, vitoria_b, saldo_a, saldo_b, gols_a, gols_b, vermelhos_a, vermelhos_b, amarelos_a, amarelos_b, vencedor_a, vencedor_b;

    printf("Informações sobre os times: \n"); 
    printf("Primeiro time: \n Vitorias: ");
    scanf("%i", &vitoria_a);
    printf(" Saldo de Gols: ");
    scanf("%i", &saldo_a);
    printf(" Gols: ");
    scanf("%i", &gols_a);
    printf(" Vermelhos: ");
    scanf("%i", &vermelhos_a);
    printf(" Amarelos: ");
    scanf("%i", &amarelos_a);

    printf("Segundo time: \n Vitorias: ");
    scanf("%i", &vitoria_b);
    printf(" Saldo de Gols: ");
    scanf("%i", &saldo_b);
    printf(" Gols: ");
    scanf("%i", &gols_b);
    printf(" Vermelhos: ");
    scanf("%i", &vermelhos_b);
    printf(" Amarelos: ");
    scanf("%i", &amarelos_b);

    if (vitoria_a > vitoria_b) {
        vencedor_a ++;
    } else {
        vencedor_b ++;
    }

    if (saldo_a > saldo_b) {
        vencedor_a ++;
    } else {
        vencedor_b ++;
    }

    if (gols_a > gols_b) {
        vencedor_a ++;
    } else {
        vencedor_b ++;
    }

    if (vermelhos_a > vermelhos_b) {
        vencedor_b ++;
    } else {
        vencedor_a ++;
    }

    if (amarelos_a > amarelos_b) {
        vencedor_b ++;
    } else {
        vencedor_a ++;
    }

    if (vencedor_a > vencedor_b) {
        printf("O vencedor é o time A\n");
    } else if(vencedor_b > vencedor_a) {
        printf("O vencedor é o time B\n");
    } else {
        printf("O times continuam empatados\n");
    }

    return 0;

}