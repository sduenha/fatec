#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4;

    printf("\nD1 D2 D3 D4\n");

    for(d1 = 1; d1 <= 6; d1++)
        for(d2 = 1; d2 <= 6; d2++)
            for(d3 = 1; d3 <= 6; d3++)
                for(d4 = 1; d4 <= 6; d4++)
                    printf("%d %d %d %d\n", d1, d2, d3, d4);
}