#include <stdio.h>

int main(void) {
    int num;
    printf("Escolha um número: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++) {
        for (int counter = 1; counter < num; counter++) {
            printf("%d", counter);
        }
        printf("\n");
    }
}