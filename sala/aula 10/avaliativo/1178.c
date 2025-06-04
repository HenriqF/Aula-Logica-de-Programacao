#include <stdio.h>

//henrique de figueiredo reinaldi 22501841

int main(){
    double porraloca[100];
    scanf("%lf", &porraloca[0]);

    for (int i =1; i<100; i++){
        porraloca[i] = porraloca[i-1]/2;
    }

    for (int i =0;i<100; i++){
        printf("N[%d] = %.4lf \n",i, porraloca[i]);
    }

    return 0;
}