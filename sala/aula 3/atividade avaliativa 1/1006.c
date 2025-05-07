#include <stdio.h>
//Henrique de Figueiredo Reinaldi, RA:22501841
int main(){
    float A, B, C, resultado;
    scanf("%f %f %f", &A, &B, &C);
    resultado = (((A*2)+(B*3)+(C*5))/10);
    printf("MEDIA = %.1f", resultado);
    return 0;
}