#include <stdio.h>
//henrique de figueiredo reinaldi 22501841
int main(){
    int qalunos =0;

    scanf("%d", &qalunos);
    if (qalunos > 30){
        printf("quantia indevida");
        return 0;
    }

    float notas[30];
    char nomes[30][20];

    int indexmaior = 0;
    float notamaior = -1;

    float media = 0;

    for(int i =0; i< qalunos; i++){
        scanf("%s %f", &nomes[i], &notas[i]);
        if (notas[i] > notamaior){
            indexmaior = i;
            notamaior = notas[i];
        }
        media += notas[i];
    }

    printf("Maior Nota: %s | %.2f\n", nomes[indexmaior], notas[indexmaior]);
    printf("Média %.2f", media/qalunos);

    return 0;
}