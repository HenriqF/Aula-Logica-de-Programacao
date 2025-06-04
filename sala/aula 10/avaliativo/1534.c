#include <stdio.h>

//henrique de figueiredo reinaldi 22501841
int main(){
    int s = 0;
    while (scanf("%d", &s) != EOF){
        for (int x = 0; x<s;x++){
            for (int y =0; y<s; y++){
                if(x+y == s-1){
                    printf("2");
                }
                else if(x==y){
                    printf("1");

                }
                else{
                    printf("3");

                }
                //printf("(%d, %d)", x, y);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}