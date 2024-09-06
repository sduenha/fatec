#include <stdio.h>

int main(void) {
    char tipo;
    float lado1, lado2, raio;
    printf("Escolha o objeto para calcular a área: \nq: Quadrado\nr: Retângulo\nc: Círculo\nEscolha: ");
    scanf("%c", &tipo);

    if (tipo == 113){
        printf("Insira as dimensões (tamanho do lado): ");
        scanf("%f", &lado1);

        printf("A área desse quadrado é %.2f\n", lado1 * lado1);
    } else if(tipo == 114) {
        printf("Insira as dimensões (tamanhos dos dois lados): ");
        scanf("%f %f", &lado1, &lado2);

        printf("A área desse retângulo é %.2f\n", lado1 * lado2);
    }else if(tipo == 99) {
        printf("Insira o raio: ");
        scanf("%f", &raio);
        printf("A área desse círculo é %.2f\n", (3.14) * raio * raio);
    } else {
        printf("Valor inválido!\n");
        return 1;
    }

}