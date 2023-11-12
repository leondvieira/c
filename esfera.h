//
// Created by leonardo on 17/09/23.
//
/*
    Implemente um TAD para a representação de uma esfera. Inclua as funções
    de inicializações necessárias e as operações que retornem seu raio,
    a sua área e o seu volume. Para resolver esse problema,
*/

#include <stdio.h> // printf
#include <stdlib.h> // malloc, free, exit

/* TAD: Esfera(diametro) */
struct esfera{
    double diametro;
};

/* Tipo exportado */
typedef struct esfera Esfera;

/* Cabeçalho das Funções exportadas */

/* Aloca um diametro a uma Esfera */
Esfera* cria(double diametro);

/* Deleta da memória uma Esfera previamente criada*/
void deletaEsfera(Esfera* e);

/* Retorna o raio com base no diametro de uma esfera */
double raio(double diametro);

/* Retorna o volume com base em um raio */
double volume(double raio);

/* Retorna a area com base em um raio */
double area(double raio);
