#include <stdio.h>
//henrique de figueiredo reinaldi 22501841
int main(){
    int escolha = 1, inter=0, gremio=0;

    int vitoriaI=0, vitoriaG=0, Empate=0, total=0;
    while (escolha == 1){
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &escolha);
        if (escolha == 1){
            scanf("%d %d", &inter, &gremio);
            total++;
            if (inter > gremio){
                vitoriaI++;
            }  
            else if (gremio > inter){
                vitoriaG++;
            }
            else if (gremio == inter){
                Empate++;
            }
        }
    }
    printf("%d grenais\n",total);
    printf("Inter: %d\n",vitoriaI);
    printf("Gremio: %d\n",vitoriaG);
    printf("Empates: %d\n",Empate);
    if (vitoriaG > vitoriaI){
        printf("Gremio venceu mais!\n");
    }
    else if (vitoriaG < vitoriaI){
        printf("Inter venceu mais\n");
    }
    return 0;
}