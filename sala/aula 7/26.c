#include <stdio.h>
#include <string.h>

int main(){
    int casos;
    int c= 0, r= 0, s = 0;

    int numAtual;
    char letraAtual[4];
    scanf("%d", &casos);
    for (int i = 0 ; i < casos; i++){
        scanf("%d %s", &numAtual, letraAtual);
        if (strcmp(letraAtual, "C") == 0){
            c += numAtual;
        }
        else if (strcmp(letraAtual, "R") == 0){
            r += numAtual;
        }
        else if (strcmp(letraAtual, "S") == 0){
            s += numAtual;
        }
    }
    int tot = (c+r+s);
    printf("Total: %d\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", tot, c, r, s);
    printf("Percentual Coelhos: %.2f %%\nPercentual Ratos: %.2f %%\nPercentual Sapos: %.2f %%\n", (((float)c/tot)*100), (((float)r/tot)*100), (((float)s/tot)*100));
    
}