#include <stdio.h>
//deu preguica de fazer em sala, fiz depois da escalada.
//Por isso a demora.

int main() {
    int l;
    double m[12][12], ans=0;
    char c;

    scanf("%d\n%c", &l, &c);
    for (int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf", &m[i][j]); 
            if (i == l){
                ans += m[i][j];
            }
        }
    }

    if(c == 'M'){
        printf("%.1lf", ans/12);
    }
    else if(c == 'S'){
        printf("%.1lf", ans);
    }

    return 0;
}
