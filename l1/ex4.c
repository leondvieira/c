#include <stdio.h>

int main (void){
    int tamanho, pretas, brancas;
    scanf("%d", &tamanho);

    tamanho *= tamanho;
    pretas = tamanho / 2;
    brancas = tamanho - pretas;

    printf("%d casas brancas e %d casas pretas\n", brancas, pretas);

    return 0;
}