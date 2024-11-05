#include <stdio.h>

int main(void) {
    int num;
    printf("Escolha um número: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++) {
        for (int j = 1; j < num; j++) {
            printf("%d\n", j);
        }
    }
}