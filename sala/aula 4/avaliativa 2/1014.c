#include <stdio.h>
//Henrique de Figueiredo Reinaldi, RA:22501841
int main(){
    int X;
    float Y, consumo;
    scanf("%d", &X);
    scanf("%f", &Y);
    consumo = (X/Y);
    printf("%.3f km/l", consumo);
    return 0;
}