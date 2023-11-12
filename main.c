//
// Created by leonardo on 17/09/23.
//
#include "esfera.h" /* Interface esfera.h */

int main(void){
    // Declaração de variáveis
    double diametro, r, v, a;

    // Pede para o usuário digitar um diametro
    printf("Digite o valor do diâmetro da Esfera\n");
    scanf("%lf", &diametro);

    // Cria um ponteiro para uma Esfera
    Esfera *e = cria(diametro);

    // Retorna o raio da esfera criada
    r = raio(e->diametro);
    printf("O raio eh %lf\n", r);

    // Com base no raio retornado, calcula o volume
    v = volume(r);
    printf("O volume eh %lf\n", v);

    // Com base no raio retornado, calcula a area
    a = area(r);
    printf("A area eh %lf\n", a);

    // Deleta da memória a Esfera criada
    deletaEsfera(e);
    return 0;
}