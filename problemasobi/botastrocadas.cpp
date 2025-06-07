#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;


    int pares = 0;

    unordered_map<int, int> direita = {};
    unordered_map<int, int> esquerda = {};

    int s=0;
    string l = "";

    while (t--){
        cin >> s >> l;
        if (l == "D"){
            direita[s] += 1;
            if(esquerda.find(s) != esquerda.end() && esquerda[s] > 0){
                int value = min(esquerda[s], direita[s]);
                pares += value;
                esquerda[s] -= value;
                direita[s] -= value;
            }
        }
        else{
            esquerda[s] += 1;
            if(direita.find(s) != direita.end() && direita[s] > 0){
                int value = min(esquerda[s], direita[s]);
                pares += value;
                esquerda[s] -= value;
                direita[s] -= value;
            }
        }
    }


    cout << pares;
    return 0;
}