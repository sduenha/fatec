#include <stdio.h>

double pot(double a, int b);

int main(void) {
    int b = -10;

    for (int i = 2; i < 11; i++) {
        pot(i, b);
        printf("=================\n");
    }
}

double pot(double a, int b) {
    double p = 1;
    if (b > 0 && b != 0) {
        for (int i = 0; i < b; i++) {
            p *= a;
            printf("%f\n", p);
        }
    } else if (b < 0 && b != 0) {
        for (int i = 0; i > b; i--) {
            p = 1 / (p * a);
            printf("%f\n", p);
        }    
    }
}