#include <stdio.h>
//Henrique de Figueiredo Reinaldi 22401841

int main(){
    float valor = 0;
    float subtrair = 0;
    scanf("%f", &valor);

    int valores[] = {100,50,20,10,5,2,1,50,25,10,5,1};
    int out[] = {0,0,0,0,0,0,0,0,0,0,0,0};

    printf("NOTAS: \n");
    for (int i=0; i<7; i++){
        out[i] = (valor-subtrair)/valores[i];
        if (i==6){
            printf("MOEDAS: \n");
            printf("%d moedas(s) de R$ %d.00\n", out[i], valores[i]);
        }
        else{
            printf("%d nota(s) de R$ %d.00\n", out[i], valores[i]);
        }
        subtrair += out[i]*valores[i];
    }
    valor = (int)((valor-subtrair) * 100 + 0.5);
    subtrair = 0;
    for (int i=7; i<12; i++){
        out[i] = (valor-subtrair)/valores[i];
        printf("%d moedas(s) de R$ %.2f\n", out[i], (float)valores[i]/100.0);
        subtrair += out[i]*valores[i];
    }

    return 0;
}

