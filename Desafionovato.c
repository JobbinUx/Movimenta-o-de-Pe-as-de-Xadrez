#include <stdio.h>

int main() {

    int casasTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
    printf("Direita\n");

    }

    int casasBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");

    while (i <= casasBispo) {
    printf("Cima, Direita\n");
    i++;

    }

    int casasRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        
    printf("Esquerda\n");
    j++;
    } while (j <= casasRainha);

    return 0;
}