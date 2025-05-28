#include <stdio.h>

int main(){
    int nums[2] = {1,0};
    int n =0;
    scanf("%d", &n);
    for(int i = 0; i<n ;i++){
        if (i%2 == 0){
            printf("%d " ,nums[1]);
            nums[1] = nums[1]+nums[0];
            
        }
        else{
            printf("%d " ,nums[0]);
            nums[0] = nums[1]+nums[0];
            
        }
    } 

    return 0;
}