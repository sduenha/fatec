#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6;

    for(d1 = 1; d1 <= 55; d1++)
        for(d2 = 1; d2 <= 56; d2++)
            for(d3 = 1; d3 <= 57; d3++)
                for(d4 = 1; d4 <= 58; d4++)
                    for(d5 = 1; d5 <= 59; d5++)
                        for(d6 = 1; d6 <= 60; d6++)
                            printf("%d %d %d %d %d %d\n", d1, d2, d3, d4, d5, d6);
}