#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    while(A!=B){
        if (A>B){
            printf("Descrescente\n");
        }
        else if (A<B || A==B){
            printf("Crescente\n");

        }
        scanf("%d %d", &A, &B);
    }
    return 0;
}