#include <stdio.h>

int main(){
    int casos;
    scanf("%d", &casos);
    for (int i = 0 ; i < casos; i++){
        double num1, num2, num3;
        scanf("%lf %lf %lf", &num1, &num2, &num3);
        printf("%.1lf\n", (((2*num1)+(3*num2)+(5*num3))/10));

    }
}