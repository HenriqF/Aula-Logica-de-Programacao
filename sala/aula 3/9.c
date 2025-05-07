#include <stdio.h>
int main(){
    int codigo1, codigo2, quantia1, quantia2;
    float preco1, preco2, total;

    scanf("%d %d %f", &codigo1, &quantia1, &preco1);
    scanf("%d %d %f", &codigo2, &quantia2, &preco2);
    
    total = ((preco1*quantia1)+(preco2*quantia2));
    printf("VALOR A PAGAR: R$ %.2f", total);
    return 0;
}