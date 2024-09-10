#include <stdio.h>

// char comparacao(int a, int b);

int main(void) {
    int valores_a[5], valores_b[5];

    for (int i = 0; i < 5; i++) {

    }

    printf("Vitórias do time A: ");
    scanf("%i", &valores_a[0]);

    printf("Vitórias do time B: ");
    scanf("%i", &valores_b[0]);


    // comparacao(valor_a, valor_b, 0);
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