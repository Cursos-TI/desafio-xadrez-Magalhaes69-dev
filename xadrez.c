// Desafio Xadrez.

#include <stdio.h>

int main(){
    int direita, cima_direita = 1, esquerda = 1;

    // Movimenta a torre 5 casas para direita.
    printf("=== Movimento da torre ===\n");
    for(direita = 1; direita <= 5; direita++){
        printf("Direita\n");
    }

    // Movimenta o bispo 5 casas para cima e à direita.
    printf("\n=== Movimento do bispo ===\n");
    while(cima_direita <= 5){
        printf("Cima Direita\n");
        cima_direita++;
    }

    // Movimenta a rainha 8 casas para esquerda.
    printf("\n=== Movimento da rainha ===\n");
    do{
        printf("Esquerda\n");
        esquerda++;
    }while(esquerda <= 8);

    return 0;
}