#include <stdio.h>
#include <math.h>

int main(){
    int tt = 0;
    scanf("%d", &tt);
    for (int t =0; t < tt; t++){
        int pa, pb;
        float g1, g2;
        scanf("%d %d %f %f", &pa, &pb ,&g1 ,&g2);

        int c = 0;
        while(pa <= pb || c < 100){
            pa += (int)((g1/100) * pa);
            pb += (int)((g2/100) * pb);
            c++;
        }
        if (c > 100){
            printf("Mais de 1 século.");
        }
        else{
            printf("%d", c);
        }
        

    } 
    return 0;
}