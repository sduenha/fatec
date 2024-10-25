#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = 0;
    for (int i = 0; i < 6; i++) {
        num = rand();
        printf(num);
    }
}