#include <stdio.h>
// Henrique de Figueiredo Reinaldi 22501841
int main(){
    float n1, n2, n3, n4, media, exame;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.2f\n", media);
    if (media < 5.0){
        printf("Aluno reprovado.");
    }
    else if (media >= 7.0){
        printf("Aluno aprovado.");
    }
    else {
        printf("Aluno em exame. \n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media = ((media+exame)/2);
        if (media >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);     
        }
        else{
            printf("Aluno reprovado. \n");
            printf("Media final: %.1f\n", media);
        }
    }
    return 0;
}