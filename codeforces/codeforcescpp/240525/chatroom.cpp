#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int p = 0;

    for (const char &c : s){
        
        if (c == 'h' && p == 0){
            p++;
        }
        else if (c == 'e' && p == 1){
            p++;
        }
        else if (c == 'l' && p == 2){
            p++;
        }
        else if (c == 'l' && p == 3){
            p++;
        }
        else if (c == 'o' && p == 4){
            cout << "YES";
            exit(0);
        }
        // else if (c != 'h' && c != 'e' && c != 'l' && c != 'o'){
        //     p = 0;
        // }
        // o pro0blema nao se importava de ter "hello de débil: helhcludoo"
    }
    cout << "NO";
    return 0;
}