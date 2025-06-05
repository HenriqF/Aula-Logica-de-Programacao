#include <bits/stdc++.h>
using namespace std;
// porra chata 🥰🥰🥰
int main(){
    string placa; cin >> placa;
    
    if(isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2])){
        if (placa.length() == 8 && placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])){
            cout << 1;
            exit(0);
        }
        else if (placa.length() == 7 && isdigit(placa[3]) && isupper(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){
            cout << 2;
            exit(0);
        }
    }
    cout << 0;
    
    
    return 0;
}