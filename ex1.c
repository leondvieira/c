#include <stdio.h>

int main (void){

    int total_joao=0, total_maria=0, i=1, y, x, d, jogadas;
    printf("Insira o número de jogadas: \n");
    scanf("%d", &jogadas);

    while(i <= jogadas){
        for(y = 1; y <= 3; y++){
            scanf("%d %d", &x, &d);
            total_joao += d * x;
        };
        for(y = 1; y <= 3; y++){
            scanf("%d %d", &x, &d);
            total_maria += d * x;
        };
        if (total_joao > total_maria){
            printf("JOAO\n");
        }else{
            printf("MARIA\n");
        }
        total_maria = 0;
        total_joao = 0;
        i ++;
    }
    return 0;
}