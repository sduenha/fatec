#include <stdio.h>

int main(void) {

    int impar, par, laco;

        printf("digite o numero de repetições de 1 a 10: ");
        scanf("%d", &laco);
    while (laco < 1 || laco > 10){
        printf("digite novamente ");
    }

    for( int i = 1; i <= laco ;i++){
        if(i % 2 == 0 ){
            printf(" par ");
        } else{
            printf("impar");
        }
    }

}