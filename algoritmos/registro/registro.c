#include <stdio.h>

struct Coordenada {
    float x;
    float y;
};
// typedef struct Coordenada Coordenada;

struct Coordenada pontos[2];

void imprimiPonto(int posicao) {
    printf("(%.2f, %.2f)\n", pontos[posicao].x, pontos[posicao].y);
}

void pegaPontos(int numPontos) {
    for (int i = 0; i < numPontos; i ++) {
        printf("Coordenada %i", i);
        printf("Digite o ponto X da coordenada: ");
        scanf("%f", &pontos[i].x);
        printf("Digite o ponto Y da coordenada: ");
        scanf("%f", &pontos[i].y);
        printf("\n");
    }
}

void somaPontos(int pos1, int pos2) {
    pontos[pos1].x = pontos[pos1].x + pontos[pos2].x;
    pontos[pos1].y = pontos[pos1].y + pontos[pos2].y;
}

void subDoisPontos(int pos1, int pos2) {
    pontos[pos1].x = pontos[pos1].x - pontos[pos2].x;
    pontos[pos1].y = pontos[pos1].y - pontos[pos2].y;
}

void multEscalar(int pos1, int escalar) {
    pontos[pos1].x = pontos[pos1].x * escalar;
    pontos[pos1].y = pontos[pos1].y * escalar;
}

int main()
{
    pegaPontos(2);
    somaPontos(0, 1);
    imprimiPonto(0);
}