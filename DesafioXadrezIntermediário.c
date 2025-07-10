#include <stdio.h>

int main() {
    // ========================
    // Movimento da TORRE (for)
    // ========================
    int movimentosTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ========================
    // Movimento do BISPO (while)
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
    // Movimento da RAINHA (do-while)
    // ========================
    int movimentosRainha = 8;
    int j = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    printf("\n");

    // ========================
    // Movimento do CAVALO (for + while aninhado)
    // ========================
    int movimentosParaBaixo = 2;
    int movimentosParaEsquerda = 1;
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    // Loop externo para os dois movimentos para baixo
    for (int k = 0; k < movimentosParaBaixo; k++) {
        printf("Baixo\n");
    }

    // Loop interno para o movimento para a esquerda
    int l = 0;
    while (l < movimentosParaEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
