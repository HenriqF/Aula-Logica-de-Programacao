#include <stdio.h>

int main(){
    int alcool=0, gaso=0, diese=0;
    int current;
    scanf("%d", &current);
    while (current != 4){
        if (current == 1){
            alcool++;
        }
        else if(current == 2){
            gaso++;
        }
        else if (current == 3){
            diese++;
        }
        scanf("%d", &current);
    }
    printf("Muito obrigado!\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gaso, diese);
    return 0;
}