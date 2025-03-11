#include <stdio.h>

typedef struct typeAlunos {
    int ra;
    int idade;
} typeAlunos;

typeAlunos alunos[5];

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
    pegarAlunos(5);
    float media = somarIdade(5);
    printf("%.2f\n", media);
}