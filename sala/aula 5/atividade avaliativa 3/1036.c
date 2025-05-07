#include <stdio.h>
#include <math.h>
//Henrique de Figueiredo Reinaldi 22401841
int main(){
    float A, B ,C, R1, R2;
    scanf("%f %f %f",&A ,&B, &C);
    if (A==0){
        printf("Impossivel calcular");
    }
    else{
        R1 = ((0-B)+(sqrt((pow(B, 2))-(4*A*C))))/(2*A);
        R2 = ((0-B)-(sqrt((pow(B, 2))-(4*A*C))))/(2*A);
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f", R2);
    }

    return 0;
}