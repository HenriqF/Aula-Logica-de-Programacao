#include <bits/stdc++.h>
using namespace std;
//euacho que já esxciste essa funcao no c=+ mas fodase...


int gecede(int a, int b){
    if(b==0){
        return a;
    }
    return gecede(b, a%b);
}

int main(){
    vector<int> porraloca = {1,1,1};

    int gcd = porraloca[0];
    for(int i = 1; i<porraloca.size(); i++){
        gcd = gecede(gcd, porraloca[i]);
        if (gcd == 1){
            cout << "ACHEI";
        }
    }

    if (gcd == 1){
        cout << "achei";
    }
    else{
        cout << "vai se foder";
    }
    return 0;
}