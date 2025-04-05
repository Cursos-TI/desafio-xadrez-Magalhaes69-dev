// Desafio Xadrez.

#include <stdio.h>

int main(){
    int direita, cima_direita = 1, esquerda = 1, baixo, cavalo_esquerda = 0;

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

    // Movimenta o cavalo 2 casas para baixo e 1 casa para esquerda.
    printf("\n=== Movimento do cavalo ===\n");
    for(baixo = 1; baixo <= 2; baixo++){
        printf("Baixo\n");
    }
    while(cavalo_esquerda < 1){
        printf("Esquerda\n");
        cavalo_esquerda++;
    }

    return 0;
}