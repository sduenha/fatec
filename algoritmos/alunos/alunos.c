#include <stdio.h>

const int QUANTIDADE = 5;

typedef struct typeAlunos {
    int ra;
    int idade;
} typeAlunos;

typeAlunos alunos[QUANTIDADE];

void pegarAlunos(int numAlunos) {
    for (int i = 0; i < numAlunos; i ++) {
        printf("Aluno %i\n", i + 1);
        printf("Digite o RA: ");
        scanf("%i", &alunos[i].ra);
        printf("Digite a idade: ");
        scanf("%i", &alunos[i].idade);
        printf("\n");
    }
}

float somarIdade(int numAlunos) {
    float media = 0;
    for (int i = 0; i < numAlunos; i++) {
        media += alunos[i].idade;
    }

    media /= numAlunos;
    return media;
}

int main()
{
    pegarAlunos(QUANTIDADE);
    float media = somarIdade(QUANTIDADE);
    printf("%.2f\n", media);
}