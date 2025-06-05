#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin >> n >> q;
    int tabuleiro[n][n];
    int skendel[n][n]; //bufferzigho pra poder fazer o bagulho atualizar corretamnte e da forma certa sem fazer erros.


    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> tabuleiro[i][j]; 
        }
    }
    cout << "\n";

    int viz[8][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
    
    while(q--){
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                skendel[i][j] = 0;
            }
        }

        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){

                int count = 0;
                
                for (int f=0;f<8;f++){
                    int x = i + viz[f][0];
                    int y = j + viz[f][1];
                    if(x >= 0 && x < n && y >= 0 && y < n) {
                        if(tabuleiro[x][y] == 1){
                            count++;
                        }
                        
                    }

                }
                if (tabuleiro[i][j] == 1){
                    if (count == 2 || count == 3){
                        skendel[i][j] = 1;
                    }
                }
                else{
                    if (count == 3){
                        skendel[i][j] = 1;
                    }
                }
            }
        }
        
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                tabuleiro[i][j] = skendel[i][j];
                // cout << tabuleiro[i][j] << " ";
            }
            // cout << "\n";
        }
        // cout << "\n";
        // cout << "\n";
    }


    int total = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << tabuleiro[i][j] << " ";
            if (tabuleiro[i][j] == 1){
                total++;
            }
            
        }
        cout << "\n";
    }
    cout << "\n";
    cout << total;
    return 0;
}