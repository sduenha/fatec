#include <stdio.h>

int main(void) {
    int vetor1[5], vetor2[5], vetor3[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite dois valores: ");
        scanf("%d %d", &vetor1[i], &vetor2[i]);
        vetor3[i] = vetor1[i] * vetor2[i];
    }
    
    printf("\n");
}