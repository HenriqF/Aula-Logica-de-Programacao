#include <stdlib.h>
#include <stdio.h>

int main(){
    while (1 == 1){
        int s = 0;
        scanf("%d", &s);
        if (s != 0){
            int nums[100][100];
            // int **nums;
            // nums = (int **)malloc(s * sizeof(int *));
            // for (int i = 0; i<s; i++){
            //     nums[i] = (int *)malloc(s * sizeof(int));
            // }

            int megal = 0;
            int megaf = s;
            int camada = 1;
            while (1==1){
                for (int x =megal; x<megaf; x++){
                    for(int y = megal; y<megaf; y++){
                        nums[x][y] = camada;
                    }
                }

                if (megaf == 0){
                    break;
                }

                camada++;
                megal++;
                megaf--;
            }
            
            for (int x = 0; x<s; x++){
                for(int y = 0; y<s; y++){
                    printf("%d ", nums[x][y]);
                }
                printf("\n");
            }
            printf("\n");

        }
        else{
            break;
        }
    }
    return 0;
}