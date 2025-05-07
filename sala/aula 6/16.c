#include <stdio.h>

int main(){
    float lista[] = {0.0,4.0,4.5,5.0,2.0,1.5};

    int codigo, quantia;
    float result;

    scanf("%d %d", &codigo, &quantia); // variaveis de input, código do produto e quantia 
    
    result = (lista[codigo]*quantia);

    printf("%.2f", result); // retorno, o que o professor pediu
    return 0;
}