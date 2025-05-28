#include <stdio.h>

int main(){
    int nums[10];
    for(int i =0; i<10 ;i++){
        scanf("%d", &nums[i]);
        if (nums[i] <= 0){
            nums[i] = 1;
        }
    }

    for (int i=0; i<10; i++){
        printf("X[%d] = %d \n",i, nums[i]);
    }

    return 0;
}