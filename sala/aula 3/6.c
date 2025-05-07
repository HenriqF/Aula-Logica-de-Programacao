#include <stdio.h>
int main(){
    float A, B, media;
    scanf("%f %f", &A, &B);
    media = (((3.5f*A) + (7.5f*B))/(11));
    printf("MEDIA = %.5f", media);
    return 0;
}