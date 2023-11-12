//
// Created by leonardo on 17/09/23.
//

#include "esfera.h" /* Interface esfera.h */

Esfera* cria(double diametro){
    Esfera *e = (Esfera*) malloc(sizeof(Esfera));
    if (e == NULL){
        printf("Memória insuficiente");
        exit(1);
    }
    e->diametro = diametro;
    return e;
}

void deletaEsfera (Esfera* e){
    free(e);
}

double raio(double diametro){
    double r = diametro / 2.0;
    return r;
}

double volume(double raio){
    double v = 4.0/3.0 * 3.14 * raio * raio * raio;
    return v;
}

double area(double raio){
    double a = 4 * 3.14 * raio * raio;
    return a;
}