#include <stdio.h>

int main() {
    
    //  Movimentos
    

    // Torre: 5 casas para a direita usando FOR
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo: 5 casas na diagonal para cima e à direita usando WHILE
    int casasBispo = 5;
    int passoBispo = 1;
    printf("Movimento do Bispo:\n");
    while (passoBispo <= casasBispo) {
        printf("Cima, Direita\n");
        passoBispo++;
    }
    printf("\n");

    // Rainha: 8 casas para a esquerda usando DO-WHILE
    int casasRainha = 8;
    int passoRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= casasRainha);
    printf("\n");

    // Cavalo: duas casas para baixo e uma para a esquerda usando loops aninhados
    int casasBaixo = 2; // número de casas para baixo
    int casasEsquerda = 1; // número de casas para esquerda
    int i, j;

    printf("Movimento do Cavalo:\n");
    
    // Loop externo: percorre o movimento vertical (para baixo)
    for (i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno: percorre o movimento horizontal (para esquerda)
    j = 1;
    while (j <= casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    printf("\n");

    return 0;
}
