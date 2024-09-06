#include <stdio.h>

int main(void) {
    char tipo;
    float lado1, lado2, raio;
    printf("Escolha o objeto para calcular a área: \nq: Quadrado\nr: Retângulo\nc: Círculo\nEscolha: ");
    scanf("%c", &tipo);

    printf("%i", tipo);

    if (tipo == "q"){
        printf("Insira as dimensões (tamanho do lado): ");
        scanf("%f", &lado1);

        printf("A área desse quadrado é %f\n", lado1 * lado1);
    } else if(tipo == "r") {
        printf("Insira as dimensões (tamanhos dos dois lados): ");
        scanf("%f %f", &lado1, &lado2);

        printf("A área desse retângulo é %f\n", lado1 * lado2);
    }else if(tipo == "c") {
        printf("Insira o raio: ");
        scanf("%f", &raio);
        printf("A área desse círculo é %f\n", (3,14) * raio * raio);
    } else {
        printf("Valor inválido!\n");
        return 1;
    }

}