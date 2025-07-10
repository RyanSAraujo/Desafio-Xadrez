#include <stdio.h>

int main() {
    // ========================
    // Simulação do movimento da TORRE - usando 'for'
    // ========================
    int movimentosTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ========================
    // Simulação do movimento do BISPO - usando 'while'
    // ========================
    int movimentosBispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // ========================
    // Simulação do movimento da RAINHA - usando 'do-while'
    // ========================
    int movimentosRainha = 8;
    int j = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    return 0;
}
