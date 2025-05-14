#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if (num > 2 && num <1000){
        for (int i = 0 ; i < 11; i++){
                printf("%d x %d = %d\n", i, num, i*num);
            }
    }
    return 0;
}