#include <stdio.h>

int main(void) {
    char tipo;
    float lado1, lado2, raio;
    printf("Escolha o objeto para calcular a área: \nq: Quadrado\nr: Retângulo\nc: Círculo\nEscolha: ");
    scanf("%c", &tipo);

    if (tipo == "q"){
        printf("Insira as dimensões (tamanho do lado): ");
        scanf("%f", &lado1);
    } else if(tipo == "r") {
        printf("Insira as dimensões (tamanhos dos dois lados): ");
        scanf("%f %f", &lado1, &lado2);
    }else if(tipo == "c") {
        printf("Insira o raio: ");
        scanf("%f", &raio);
    } else {
        printf("Valor inválido!\n");
        return 1;
    }
}