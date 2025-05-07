#include <stdio.h>
//Henrique de Figueiredo Reinaldi 22401841
int main(){
    int segundos, minutos, horas;
    scanf("%d", &segundos);

    minutos = (segundos/60);
    horas = (minutos/60);
    segundos = (segundos - 60*minutos);
    minutos = (minutos - 60*horas);
    
    printf("%d : %d : %d",horas ,minutos, segundos);
    return 0;
}