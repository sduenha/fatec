#include <stdio.h>

int main(void) {
    int vetor1[5] = {1, 2, 3, 4, 5};
    int vetor2[5] = {1, 2, 3, 4, 5};
    int vetor3[5];

    for (int i = 0; i < 5; i++) {
        vetor3[i] = vetor1[i] * vetor2[i];
        printf("%d ", vetor3[i]);
    }
    printf("\n");
}