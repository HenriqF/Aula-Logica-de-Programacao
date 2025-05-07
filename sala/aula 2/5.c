#include <stdio.h>
int main(){
    int a ,b = 0;
    printf("Numero1 ");
    scanf("%d", &a);
    printf("\n");
    printf("Numero2 ");
    scanf("%d", &b);
    int res = a*b;
    printf("%d", res);
    return 0;
}