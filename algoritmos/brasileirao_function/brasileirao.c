#include <stdio.h>

int comparacao(int a, int b, int ordem);
char vencedor;

int main(void) {
    int valores_a[5], valores_b[5];
    char parametros[5][20] = {"vitorias", "saldo de gols", "gols", "cartões Vermelhos", "cartões Amarelos"};
    char vencedor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor de %s: ", parametros[i]);
        scanf("%i %i", &valores_a[i], &valores_b[i]);
        if (i == 3 || i == 4) {
            vencedor = comparacao(valores_a[i], valores_b[i], 1);
        } else {
            vencedor = comparacao(valores_a[i], valores_b[i], 0);
        }
        if (vencedor == "a" || vencedor == "b") {
            printf("O vencedor foi o time %c", vencedor);
            return 0;
        }
    }
}

int comparacao(int a, int b, int ordem) {
    if (ordem) {
        if(a > b) {
            vencedor = a;
        } else if (b > a) {
            vencedor b;
        } else {
            return 0;
        }
    } else {
        if (a > b) {
            return b;
        } else if (b > a){
            return a;
        } else {
            return 0;
        }
    }

}