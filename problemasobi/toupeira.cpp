#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, t; cin >> s >> t;
    unordered_map<int, vector<int>> caminhos;

    while (t--){
        int x, y; cin >> x >> y;
        caminhos[x].push_back(y);
        caminhos[y].push_back(x);
    }

    int p; cin >> p;

    int total = 0;
    while (p--){
        int tamanho; cin >> tamanho;
        vector<int> ca(tamanho); for(auto& c: ca) cin >> c;

        int count = 0;
        for (int i =0; i < tamanho-1;i++){
            vector<int> possibilidades = caminhos[ca[i]];

            for(int j =0; j<possibilidades.size(); j++){
                if(possibilidades[j] == ca[i+1]){
                    count++;
                }
            }
        }
        if (count == tamanho-1){
            total++;
        }
    }
    cout << total;

    return 0; 
}