#include <stdio.h>
//Henrique de Figueiredo Reinaldi, RA:22501841
int main(){
    char nome[1233];
    double salario, vendas, total;
    scanf("%s %lf %lf",nome ,&salario, &vendas);
    total = (salario+(0.15*vendas));
    printf("TOTAL = R$ %.2lf", total);
    
    return 0;
}