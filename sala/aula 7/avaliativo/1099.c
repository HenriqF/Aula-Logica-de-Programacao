#include <stdio.h>

// henrique de figueiredo reinaldi 22501841

int max = 0;
int indexNum = 0;
int numeroAtual= 0;

int main(){
    for (int i = 0; i<=100; i++){
        scanf("%d", &numeroAtual);
        if (numeroAtual > max){
            max = numeroAtual;
            indexNum = i;
        }
    }
    printf("\n%d \n%d", max, indexNum+1);
    return 0;
}