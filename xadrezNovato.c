#include <stdio.h>

int main() {
   
    //  Movimentos
   

    // Torre: 5 casas para a direita usando FOR
    int casasTorre = 5;
    printf(" Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // passo da Torre é para a direita
    }
    printf("\n");

    // Bispo: 5 casas na diagonal para cima e à direita usando WHILE
    int casasBispo = 5;
    int passoBispo = 1;
    printf("Movimento do Bispo:\n");
    while (passoBispo <= casasBispo) {
        printf("Cima, Direita\n"); //  passo do Bispo é diagonal
        passoBispo++;
    }
    printf("\n");

    // Rainha: 8 casas para a esquerda usando DO-WHILE
    int casasRainha = 8;
    int passoRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n"); //  passo da Rainha é para a esquerda
        passoRainha++;
    } while (passoRainha <= casasRainha);
    printf("\n");

    return 0;
}
