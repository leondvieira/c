// A entrada contém vários casos de teste. A primeira linha possui um inteiro N que indica o número de casos de teste.
// Cada caso de teste consiste em um sobrenome. A string contém letras do alfabeto sem acentos, a primeira letra
// está sempre em maiúscula e o sobrenome pode ter no máximo 42 caracteres.
// um sobrenome é difícil se tiver três ou mais consoantes consecutivas.
// Ferrari
// Bianchi
// Hoffmann
// Hofmann
// Lewandowski
//Nowak

#include <stdio.h>

int main (void){
    int num_alunos, count, caracter;
    char nome[43];
    scanf("%d", &num_alunos);

    while (num_alunos > 0){
        caracter = 0;
        count = 0;
        scanf("%s", nome);
        while(nome[caracter] != '\0'){
            if (nome[caracter] != 'a' && nome[caracter] != 'A' && nome[caracter] != 'e' && nome[caracter] != 'E'
                && nome[caracter] != 'i' && nome[caracter] != 'I' && nome[caracter] != 'o' && nome[caracter] != 'O'
                && nome[caracter] != 'u' && nome[caracter] != 'U'){
                count ++;
            } else if (count < 3) {
                count = 0;
            }
            caracter ++;
        }
        if (count >= 3){
            printf("%s nao eh facil\n", nome);
        } else {
            printf("%s eh facil\n", nome);
        }
        num_alunos --;
    }
    return 0;
}