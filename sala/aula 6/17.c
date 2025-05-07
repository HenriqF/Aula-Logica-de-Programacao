#include <stdio.h>

int main(){
    float x, y;
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0){
        printf("ORIGEM");
    }
    else if (x == 0){
        printf("Ponto está no eixo X");

    }
    else if (y == 0){
        printf("Ponto está no eixo Y");
    }
    else{
        if (x > 0){
            if (y > 0){
                printf("quadrante 1");
            }
            else{
                printf("quadrante 4");
            }
        }
        else {
            if (y > 0){
                printf("quadrante 2");
            }
            else{
                printf("quadrante 3");
            }
        }
    }
    return 0;
}