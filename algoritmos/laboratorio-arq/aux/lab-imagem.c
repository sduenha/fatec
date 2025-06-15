// Grupo: Giullia Ladislau - 2760482421044, Matheus Santana - 2760482421014, Samuel Duenha - 2760482421016, Yan Mazzucatto - 2760482421017
// Descrição do programa: O programa visa colocar filtros em imagens, ele recebe como parâmetros o nome do arquivo de entrada e o nome do arquivo de saida, depois pede o nome do filtro que vai utilizar (atualmente só tem dois filtros implementados, "cinza" e "esticar"), depois o programa roda e devolve no arquivo de saida a imagem com o filtro aplicado
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 129

// Faz a leitura de um arquivo de imagem
// ERRO: Avisa quando não consegue abrir a imagem
void readImage(char *name, int R[MAX][MAX], int G[MAX][MAX], int B[MAX][MAX], int *cols, int *rows){
	int i, j, lixo;
	char p;

	FILE *f;
	f = fopen(name, "r");
	if(f==NULL){
		printf("Erro ao abrir a imagem \"%s\".\n", name);
		return;
	}
	fscanf(f, "%c", &p);
	fscanf(f, "%d", &lixo);
	fscanf(f, "%d %d", cols, rows);
	fscanf(f, "%d", &lixo);
	for(i=0;i<(*rows);i++){
		for(j=0;j<(*cols);j++){
			fscanf(f, "%d %d %d", &R[i][j], &G[i][j], &B[i][j]);
		}
	}
	fclose(f);
}

// Faz a escrita de um arquivo de imagem
void writeImage(char *arqSaida, int R[MAX][MAX], int G[MAX][MAX], int B[MAX][MAX], int cols, int rows){
  	int i, j;
  	FILE *f;

  	f = fopen(arqSaida, "w");
  	fprintf(f, "P3\n%d %d\n255\n",cols, rows);

	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			fprintf(f, "%d %d %d", R[i][j], G[i][j], B[i][j]);
			if (j<cols-1){
				fprintf(f, " ");
			}
		}
		fprintf(f, "\n");
	}
	fclose(f);
}

// Aplica o filtro de esticar, pega todos os valores de cor da imagem encontra o maior e o menor e faz um conta para pegar o novo valor de RGB
void esticarContraste(int R[MAX][MAX], int G[MAX][MAX], int B[MAX][MAX], int novaR[MAX][MAX], int novaG[MAX][MAX], int novaB[MAX][MAX], int cols, int rows){
	int i, j, minR = R[0][0], maxR = 0, minG = G[0][0], maxG = 0, minB = B[0][0], maxB = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			if (R[i][j] > maxR) maxR = R[i][j];
			if (R[i][j] < minR) minR = R[i][j];
			if (G[i][j] > maxG) maxG = G[i][j];
			if (G[i][j] < minG) minG = G[i][j];
			if (B[i][j] > maxB) maxB = B[i][j];
			if (B[i][j] < minB) minB = B[i][j];
		}
	}

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			novaR[i][j] = ((R[i][j] - minR) * 255)/(maxR - minR);
			novaG[i][j] = ((G[i][j] - minG) * 255)/(maxG - minG);
			novaB[i][j] = ((B[i][j] - minB) * 255)/(maxB - minB);
		}
	}
} 

// Aplica o filtro cinza, pega todos os valores de cor do pixel, faz um média e aplica no RGB o mesmo valor
void escalaCinza(int R[MAX][MAX], int G[MAX][MAX], int B[MAX][MAX], int novaR[MAX][MAX], int novaG[MAX][MAX], int novaB[MAX][MAX], int cols, int rows){
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			novaR[i][j] = (R[i][j] + G[i][j] + B[i][j]) / 3;
			novaG[i][j] = novaR[i][j];
			novaB[i][j] = novaR[i][j];
		}
	}
}

int main(int argc, char **argv) {
  if (argc != 3) {
    fprintf(stderr, "Argumentos invalidos.\n");
    fprintf(stderr, "Usado:");
    for (int i=0; i<argc; i++) {
			fprintf(stderr, " %s", argv[i]);
    }
    fprintf(stderr, "\n");
    return 1;
  }
  char efeito[20];
  char *arqEntrada = argv[1];
  char *arqSaida = argv[2];
  int R[MAX][MAX], G[MAX][MAX], B[MAX][MAX], novaR[MAX][MAX], novaG[MAX][MAX], novaB[MAX][MAX];
  int cols, rows;

  // Pega o filtro selecionado
  scanf("%s", efeito);

  // Faz a leitura do arquivo desejado
  readImage(arqEntrada, R, G, B, &cols, &rows);

  if (strcmp(efeito, "cinza") == 0){ // Vê se o filtro é o cinza, se for aplica o filtro na imagem
	escalaCinza(R, G, B, novaR, novaG, novaB, cols, rows);
  } else if (strcmp(efeito, "esticar") == 0) { // Vê se o filtro é o estica, se for aplica o filtro na imagem
	esticarContraste(R, G, B, novaR, novaG, novaB, cols, rows);
  } else { // Se o filtro selecionado não estiver feito ele retorna com aviso para o usuário
	printf("O efeito escolhido não existe!\n");
	return 1;
  }

  // Depois que passou pelo filtro ele escreve a nova imagem no arquivo de saida
  writeImage(arqSaida, novaR, novaG, novaB, cols, rows);

  return 0;
}
