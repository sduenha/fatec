#include <stdio.h>

int testNum(int num);
int testPerfeito(int num);
int testTriangular(int num);

int main(void) {
    printf("Início da luta")
    int round = 0;

    while (round != 1) {
    }
}

int testNum(int num) {
    int novoNum = testPerfeito(num);
    if (novoNum) {
        return novoNum;
    } else {
        novoNum = testTriangular(num);
        if (novoNum) {
            return novoNum;
        } else {
            novoNum = num;
            return novoNum;
        }
    }
}

int testPerfeito(int num) {

}

int testTriangular(int num) {

}