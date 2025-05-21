#include <stdio.h>

int main(){
    int senha = 2002;
    int guess = 0;
    scanf("%d", &guess);
    while (guess != senha){
        printf("Senha inválida!\n");
        scanf("%d", &guess);
        
    }
    printf("Acesso permitido!\n");

    return 0;
}