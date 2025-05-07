#include <stdio.h>
int main(){
    int a, b = 0;
    printf("Numero1: ");
    scanf("%d", &a);
    printf("\n");
    printf("Numero2: ");
    scanf("%d", &b);
    int res = a+b;
    printf("X = ");
    printf("%d", res);
    return 0;
}

// scanf("%d %d", &a, &b);
// printf("X = %d\n", X)
    // nos dois casos, as variaveis tomam a posição de %d, respectivamente.