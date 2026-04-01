#include <stdio.h>
#include <stdlib.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10

int main() {
    int linha, coluna;
    int tabuleiro[LINHAS][COLUNAS] = {0};

    //navio na horizontal
        linha = 0;
        coluna = 0;      
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }

    //navio na vertical
        linha = 0;
        coluna = 9;    
    for (int i = 0; i < 3; i++){
         tabuleiro[linha + i][coluna] = 3;
    }

    //navios na diagonal esquerda pra direita
        linha  = 3;
        coluna = 0;    
    for (int i = 0; i < 4; i++){
        tabuleiro[linha + i][coluna + i] = 3;
    }

    //navios na diagonal direita pra esquerda
        linha  = 6;       
        coluna = 2;    
    for (int i = 0; i < 3; i++){
        if(linha + i < LINHAS && coluna - i >= 0){
        tabuleiro[linha + i][coluna - i] = 3;            
        }
    }

    //Forma geometrica Cone
    linha = 7;
    coluna = 3;
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            int novaLinha = linha + i;
            int novaColuna = coluna + j;
                tabuleiro[novaLinha][novaColuna] = 1;    
        }
    }

    //forma em cruz
    linha = 1;
    coluna = 5;
    for (int i = -1; i <= 1; i++) {
        if (coluna + i >= 0 && coluna + i <10) {
            tabuleiro[linha][coluna + i] = 2;
        }
        if (linha + i >= 0 && linha + i <10){
            tabuleiro[linha + i][coluna] = 2;
        }
    }

    //forma octaedro
    linha = 4;
    coluna = 7;
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (abs(i) + abs(j) <= 2){
                int novaLinha = linha + i;
                int novaColuna = coluna + j;
                tabuleiro[novaLinha][novaColuna] = 5;
            }        
        }
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