#include <stdio.h>
#include <stdlib.h>

int * grow(int new_size, int *size, int *max_size, int *vet) {
    int i, tam = *size;
    int *new_vet = malloc(sizeof(int) * new_size);


    for (i = 0; i < tam; i++) {
        new_vet[i] = vet[i];
    }

    *size = i;
    *max_size = new_size;

    return new_vet;
}

int * addVet(int *vet, int * size, int * max_size, int value) {
    int *new_vet = vet;

    if (*size == *max_size) {
        new_vet = grow(*max_size * 2, size, max_size, vet);
    }
    
    *size = *size + 1;
    new_vet[*size] = value;

    return new_vet;
}

int removeVet(void) {

}

int shrink(void) {

}

int * initVet(int *size, int *maxSize) {
    int *values = malloc(4 * sizeof(int));
    for (int i = 0; i < 4;  i ++) {
        printf("Escolha %d° valor para o seu vetor: ", i + 1);
        scanf("%d", &values[i]);
    }

    *maxSize = 4;
    *size = 4;

    return values;
}

int main(void) {
    int max_size, size;

    int *values = initVet(&size, &max_size);

    values = addVet(values, &size, &max_size, 30);

    for (int i = 0; i < size; i++) {
        printf("%d, ", values[i]);
    }

    printf("\n");

    return 0;

}