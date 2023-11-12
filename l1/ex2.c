#include <stdio.h>

int main (void){
    unsigned int  x1, x2, y1, y2, num_meteoritos, x_met, y_met;
    int i=1, j, count_met=0;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    while(x1 != 0 && x2 != 0 && y1 != 0 && y2 !=0){
        scanf("%d", &num_meteoritos);
        for (j = 1; j <= num_meteoritos; j++){
            scanf("%d %d", &x_met, &y_met);

            if ((x1 <= x_met && x_met <= x2) && (y2 <= y_met && y_met <= y1)){
                count_met += 1;
            }
        }

        printf("Teste %d\n", i);
        printf("%d\n", count_met);
        i++;
        count_met = 0;
        j = 1;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }
    return 0;
}