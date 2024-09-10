#include <stdio.h>

int comparacao(int a, int b, int ordem);
char vencedor;

int main(void) {
    int valores_a[5], valores_b[5];
    char parametros[5][20] = {"vitorias", "saldo de gols", "gols", "cartões Vermelhos", "cartões Amarelos"};
    int vencedor_num;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor de %s: ", parametros[i]);
        scanf("%i %i", &valores_a[i], &valores_b[i]);
        if (i == 3 || i == 4) {
            vencedor_num = comparacao(valores_a[i], valores_b[i], 1);
        } else {
            vencedor_num = comparacao(valores_a[i], valores_b[i], 0);
        }
        if (vencedor_num == 1 || vencedor_num == 2) {
            printf("O vencedor foi o time %c\n", vencedor);
            return 0;
        }

        if (i == 4 && vencedor_num == 0) {
            printf("Os times continuam empatados!\n");
            return 0;
        }
    }
}

int comparacao(int a, int b, int ordem) {
    if (!ordem) {
        if(a > b) {
            vencedor = a;
            return 1;
        } else if (b > a) {
            vencedor = b;
            return 2;
        } else {
            return 0;
        }
    } else {
        if (a > b) {
            vencedor = b;
            return 2;
        } else if (b > a){
            vencedor = a;
            return 1;
        } else {
            return 0;
        }
    }

}