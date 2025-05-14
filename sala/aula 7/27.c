#include <stdio.h>

int main(){
    int j = 60;
    for (int i = 0; i<=12; i++){
        printf("I = %d J = %d\n", i+1, j);
        j -= 5;
    }
    return 0;
}