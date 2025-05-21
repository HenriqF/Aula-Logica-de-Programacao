#include <stdio.h>
//henrique de figueiredo reinaldi 22501841
int main(){
    int x = 1, y = 1;
    while (x != 0 && y != 0){
        scanf("%d %d", &x, &y);
        if (x>0 && y>0){
            printf("primeiro\n");
        }
        else if (x<0 && y>0){
            printf("segundo\n");
        }
        else if (x<0 && y<0){
            printf("terceiro\n");
        }
        else if (x>0 && y<0){
            printf("quarto\n");
        }
    }
    printf("Ponto não faz parte de um quadrante.\n");
}