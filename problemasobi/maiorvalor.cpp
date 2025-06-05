#include <bits/stdc++.h>
using namespace std;
// numeros sao pequenos, vou usar bruteforce.

int main(){
    int n,m,s; cin >> n >> m >> s;

    int maior = -1;
    for (int i = n; i<m; i++){
        int j = i;
        int soma = 0;
        while(j != 0){
            int digito = j%10;
            soma += digito;
            j/=10;
        }
        if (soma == s){
            if (i > maior){
                maior = i;
            }
        }
    }
    cout << maior;

    return 0;
}