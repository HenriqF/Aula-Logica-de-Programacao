#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    for (int i =1; i<n+1 ;i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}