#include <stdio.h>

int fibas(int n){
    if (n == 0) return 0;
    else if (n == 1)return 1;
    else return fibas(n-1) + fibas(n-2);
}



int main(){
    int n;
    scanf("%d", &n);
    printf("%d" , fibas(n));
    return 0;
}