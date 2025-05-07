#include <stdio.h>
#include <math.h>
//Henrique de Figueiredo Reinaldi, RA:22501841
int main(){
    float R, resposta;
    scanf("%f", &R);
    resposta = ((4.0/3.0)*3.14159*pow(R, 3));
    printf("VOLUME = %.3f", resposta);
    return 0;
}