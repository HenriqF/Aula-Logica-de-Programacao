#include <stdio.h>
#include <string.h>
// henrique de figueiredo reinaldi 22501841

int main(){
    char prodNome[1000][1000];
    int prodQtd[1000];
    float prodPreco[1000];



    char senha[] = "estoque2025";
    int tentativas = 3;
    char resposta[100];
    do{
        tentativas--;
        printf("senha-->");
        scanf("%s", &resposta);
    }while(strcmp(senha, resposta) != 0 && tentativas>0);

    if (strcmp(senha, resposta) == 0){
        char continuar = 'S';
        int index = 0;
        do{
            printf("Nome do produto -->\n");
            scanf("%s", prodNome[index]);
            printf("Quantia do produto -->\n");
            scanf("%d", &prodQtd[index]);
            printf("Preco do produto -->\n");
            scanf("%f", &prodPreco[index]);

            
            if (prodPreco[index]>0 && prodNome[index] != "" && prodQtd[index] > 0){
                index++;
            }
            else{
                printf("Dados invalidos\n");
            }
            
            printf("continuar-->");
            scanf("%s", &continuar);
        } while(continuar == 'S');
        printf("Quantidade total de produtos: %d\n", index);
        float valorTotal;
        for(int i =0; i < index; i++){
            valorTotal += prodQtd[i]*prodPreco[i];
        }
        printf("Valor total do estoque: R$%.2f\n", valorTotal);
    }
    else{
        printf("acesso negado...");
    }
    return 0;
}