#include <stdio.h>

int main(){
    float A, B, C, tri, cir, tra, qua, ret;
    scanf("%f %f %f",&A ,&B ,&C);
    tri = ((A * C)/2);
    cir = (3.14159*C*C);
    tra = ((((A+B)/2)*C));
    qua = (B*B);
    ret = (A*B);
    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n", cir);
    printf("TRAPEZIO: %.3f\n", tra);
    printf("QUADRADO: %.3f\n", qua);
    printf("RETANGULO %.3f\n", ret);
    return 0;
}