#include <stdio.h>


// Funções Recursivas


// Torre: move-se horizontalmente para a direita
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);  // chamada recursiva
}

// Rainha: move-se horizontalmente para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo: move-se na diagonal (cima e direita) com loop interno e recursão
void moverBispo(int linhas, int colunas) {
    if (linhas == 0) return; // condição de parada externa

    // Loop interno: cada linha move o número de colunas
    for (int j = 1; j <= colunas; j++) {
        printf("Cima, Direita\n");
    }

    // chamada recursiva para próxima linha
    moverBispo(linhas - 1, colunas);
}


// Função principal

int main() {
    
    // Movimento das peças
    

    // Torre
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1; // a cada linha, move 1 na diagonal
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // Rainha
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo: loops aninhados simples, movimento "L" (2 casas para cima, 1 para a direita)
    int casasCavaloVertical = 2;
    int casasCavaloHorizontal = 1;
    printf("Movimento do Cavalo:\n");

    int i = 0, j = 0;
    // Loop externo: movimento vertical
    while (i < casasCavaloVertical) {
        printf("Cima\n");
        i++;
        // Loop interno: movimento horizontal após completar vertical
        if (i == casasCavaloVertical) {
            for (j = 0; j < casasCavaloHorizontal; j++) {
                printf("Direita\n");
            }
        }
    }

    printf("\n");

    return 0;
}
