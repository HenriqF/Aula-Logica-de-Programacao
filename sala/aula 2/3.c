#include <stdio.h>
int main(){
    float raio;
    float pi = 3.14159;
    printf("raio do circulo:");
    scanf("%f", &raio);
    float res = pi*raio*raio;
    printf("\n");
    printf("area: ");
    printf("%f", res);

    return 0;
}