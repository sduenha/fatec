#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 129

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

  scanf("%s", efeito);

  readImage(arqEntrada, R, G, B, &cols, &rows);

  if (strcmp(efeito, "cinza") == 0){
	escalaCinza(R, G, B, novaR, novaG, novaB, cols, rows);
  } else if (strcmp(efeito, "esticar") == 0) {
	esticarContraste(R, G, B, novaR, novaG, novaB, cols, rows);
  } else {
	printf("O efeito escolhido não existe!\n");
	return 1;
  }

  writeImage(arqSaida, novaR, novaG, novaB, cols, rows);
  


  return 0;
}
