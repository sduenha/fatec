#include <stdio.h>

int main(void) {

    int impar, par, laco;

    do{
        printf("digite o numero de repetições de 1 a 10: ");
        scanf("%d", &laco);
    } while (laco < 1 || laco > 10);

    for( int i = 1; i <= laco ;i++){
        if(i % 2 == 0 ){
            printf(" par ");
        } else{
            printf("impar");
        }
    }

}