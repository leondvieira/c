//
// Created by leonardo on 17/09/23.
// A entrada cosiste de três inteiros não negativos E, F, C, onde E < 1000 é igual ao número de
// garrafas de refrigerante vazias na posse de Tim no ínicio do dia, F < 1000 é o número de garrafas de
// refrigerante vaizas encontradas durante o dia, e 1 < C < 2000 é o número de garrafas vazias necessárias
// para comprar um novo refrigerante.
// 9 0 3 = 4
//

#include <stdio.h>

int main (void){
    int em_posse, encontradas, garrafas_necessarias, tomou;
    scanf("%d %d %d", &em_posse, &encontradas, &garrafas_necessarias);

    em_posse += encontradas;
    tomou = 0;

    while (em_posse >= garrafas_necessarias){
        em_posse -= garrafas_necessarias;
        tomou += 1;
        em_posse += 1;
    }

    printf("%d\n", tomou);

    return 0;
}