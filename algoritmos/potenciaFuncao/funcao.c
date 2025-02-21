#include <stdio.h>

double pot(double a, int b);

int main(void) {
    int b = 10;

    for (int i = 2; i < 11; i++) {
        pot(i, b);
        printf("=================\n");
    }
}

double pot(double a, int b) {
    int p = 1;
    for (int i = 0; i < b; i++) {
        p *= a;
        printf("%d\n", p);
    }
}