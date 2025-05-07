#include <stdio.h>
#include <locale.h>

// Henrique de Figueiredo Reinaldi 22501841
int main(){
    setlocal(LC_ALL, "Portuguese");
    int A, B;
    scanf("%d %d", &A, &B);
    // if (B>A){
    //     A = A^B;
    //     B = A^B;
    //     A = A^B;
    // }    
    if (A%B==0 || B%A == 0){
        printf("São multiplos.");
    }
    else{
        printf("Não são multiplos.");
    }
    return 0;
}