#include <stdio.h>

int main() {
    printf("Simulacao de Movimentos no Xadrez\n");
    printf("--------------------------------\n\n");

    // 1 Torre move 5 casas para a direita (usando for)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");  // Torre se move em linha reta horizontal
    }
    printf("\n");

    //  Bispo move 5 casas na diagonal superior direita (usando while)
    printf("Movimento do Bispo (5 casas na diagonal cima-direita):\n");
    int casas_bispo = 1;
    while (casas_bispo <= 5) {
        printf("Cima, Direita\n");  // Bispo se move na diagonal
        casas_bispo++;
    }
    printf("\n");

    //3 Rainha move 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int casas_rainha = 1;
    do {
        printf("Esquerda\n");  // Rainha pode se mover em linha reta como a Torre
        casas_rainha++;
    } while (casas_rainha <= 8);

    return 0;
}
