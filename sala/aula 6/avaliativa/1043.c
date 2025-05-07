#include <stdio.h>
// Henrique de Figueiredo Reinaldi 22501841
int main(){
    float A, B, C, perimetro, area;
    scanf("%f %f %f", &A, &B, &C);
    if (A+B > C && A+C > B && B+C >A){
        perimetro = A+B+C;
        printf("Perimetro = %.1f", perimetro);
    }
    else{
        area = ((A+B)/2)*C;
        printf("Area = %.1f", area);
    }
    return 0;
}