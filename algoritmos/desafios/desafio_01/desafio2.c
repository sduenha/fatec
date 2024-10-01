#include <stdio.h>

#define ROWS 3
#define COLS 3

void printBoard(char board[ROWS][COLS]) {
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int checkWinner(char board[ROWS][COLS], char player) {
    // Checando colunas para vitória
    for (int i = 0; i < COLS; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char board[ROWS][COLS] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    int row, col, moves = 0;
    char player = 'X';

    printf("Jogo da Velha Vertical\n");
    printBoard(board);

    while (moves < ROWS * COLS) {
        printf("Jogador %c, escolha uma coluna (0-2) e linha (0-2): ", player);
        scanf("%d %d", &col, &row);

        if (col >= 0 && col < COLS && row >= 0 && row < ROWS && board[row][col] == '-') {
            board[row][col] = player;
            moves++;
            printBoard(board);

            if (checkWinner(board, player)) {
                printf("Jogador %c venceu!\n", player);
                break;
            }

            player = (player == 'X') ? 'O' : 'X';
        } else {
            printf("Movimento inválido! Tente novamente.\n");
        }
    }

    if (moves == ROWS * COLS) {
        printf("O jogo empatou!\n");
    }

    return 0;
}