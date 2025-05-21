#include <stdio.h>

int main(){
    float media;
    int notas = 0;  

    float current;
    while (notas < 2){
        scanf("%f", &current);
        if (current >= 0 && current <= 10){
            media += current;
            notas++;
        }
        else{
            printf("Nota inválida!\n");
        }
    }
    printf("Média: %.2f", (float)media/2);



    return 0;
}
