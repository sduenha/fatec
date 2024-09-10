#include <stdio.h>

// char comparacao(int a, int b, int ordem);

int main(void) {
    int valores_a[5], valores_b[5];
    char parametros[5][20] = {"vitorias", "saldo de gols", "gols", "cartões Vermelhos", "cartões Amarelos"};
    char vencedor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor de %s: ", parametros[i]);
        scanf("%i %i", &valores_a[i], &valores_b[i]);
        vencedor = comparacao(valores_a[i], valores_b[i], 0);
        if (vencedor == "a" || vencedor == "b") {
            printf("O vencedor foi o time %c", vencedor);
            return 0;
        }
    }
}

char comparacao(int a, int b, int ordem) {
    if (ordem) {
        if(a > b) {
            return a;
        } else if (b > a) {
            return b;
        } else {
            return;
        }
    } else {
        if (a > b) {
            return b;
        } else if (b > a){
            return a;
        } else {
            return;
        }
    }

}