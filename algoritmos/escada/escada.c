#include <stdio.h>

int main(void) {
    int num, counter = 1;
    printf("Escolha um número: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for (int j = 1; j <= counter; j++) {
            printf("%d", j);
        }
        counter++;
        printf("\n");
    }
}