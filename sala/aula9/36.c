#include <stdio.h>

int main(){
    int tt;
    scanf("%d", &tt);
    for (int t = 0; t<tt; t++){
        int nums[2] = {1,0};
        int n =0;
        scanf("%d", &n);
        for(int i = 0; i<n ;i++){
            if (i%2 == 0){
                nums[1] = nums[1]+nums[0];
            }
            else{
                nums[0] = nums[1]+nums[0];
            }

        } 
        if (n%2 == 0){
            printf("Fib(%d) = %d " ,n, nums[1]);
        }
        else{
            printf("Fib(%d) = %d " ,n, nums[0]);
        }
    }

    return 0;
}