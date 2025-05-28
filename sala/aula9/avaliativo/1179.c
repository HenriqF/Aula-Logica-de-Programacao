#include <stdio.h>
//henrique de figueiredo reinaldi 22501841
int main(){
    int par[5], p=0;
    int impar[5], i=0;
    for (int t =0; t<15;t++){
        int c;
        scanf("%d", &c);
        if (c%2 == 0){
            if (p < 5){
                par[p] = c;
                p++;
            }
            else{
                p =0;
                for (int k =0; k<5;k++){
                    printf("par[%d] = %d\n", k, par[k]);
                }
                par[p] = c;
                p++;
            }
        }
        else{
            if (i < 5){
                impar[i] = c;
                i++;
            }
            else{
                i =0;
                for (int k =0; k<5;k++){
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                impar[i] = c;
                i++;
            }
        }
    }
    if (i != 0){
        for (int k =0; k<i;k++){
            printf("impar[%d] = %d\n", k, impar[k]);
        }
    }
    if (p != 0){
        for (int k =0; k<p;k++){
            printf("par[%d] = %d\n", k, par[k]);
        }
    }
    return 0;
}