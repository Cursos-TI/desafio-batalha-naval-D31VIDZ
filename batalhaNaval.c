#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10

int main() {
    int linha, coluna;
    int tabuleiro[LINHAS][COLUNAS] = {0};

    for (int i = 0; i < 3; i++) {
        linha = 2;
        coluna = 3;        
        tabuleiro[linha][coluna + i] = 3;
    }

    for (int i = 0; i < 3; i++){
        linha = 5;
        coluna = 9;
         tabuleiro[linha + i][coluna] = 3;
    }

    printf("\n** Jogo Batalha Naval ** \n");
    printf("  A B C D E F G H I J\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", i);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");        
    }
    
    return 0;
}