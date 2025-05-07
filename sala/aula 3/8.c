#include <stdio.h>
int main(){
    int numero, horas;
    float receba, resultado;
    scanf("%d %d %f", &numero, &horas, &receba);
    resultado = (receba*horas);
    printf("NUMERO = %d \n", numero);
    printf("SALARIO = U$%.2f", resultado);
    return 0;
}