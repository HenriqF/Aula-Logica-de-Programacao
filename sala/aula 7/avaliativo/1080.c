#include <stdio.h>

// henrique de figueiredo reinaldi 22501841

int main(){
    int casos;
    scanf("%d", &casos);
    for (int i = 0 ; i < casos; i++){
        int x=0, y=0, sum=0;
        scanf("%d %d", &x, &y);
        if (x>y){
            x ^= y;
            y ^= x;
            x ^= y;
        }
        for (int i = x+1; i < y; i++){
            if (i %2 != 0){
                sum += i;
            }
        }
        printf("\n%d\n", sum);
    }   
}