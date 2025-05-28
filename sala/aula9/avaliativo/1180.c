#include <stdio.h>
#include <stdlib.h>
//henrique de figueiredo reinaldi 22501841
int main(){
    int s = 0;
    scanf("%d", &s);
    int *nums = (int *)malloc(s * sizeof(int));


    scanf("%d", &nums[1]);
    int mini = nums[1];
    int index = 0;

    for (int k =1; k< s; k++){
        scanf("%d", &nums[k]);
        if (nums[k] < mini){
            index = k;
            mini = nums[k];
        }
    }
    printf("Menor valor: %d\nPosicao: %d", mini, index);

    return 0;
}