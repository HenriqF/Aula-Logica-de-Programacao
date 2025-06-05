#include <bits/stdc++.h>
using namespace std;

int main(){
    int victor = 0;
    int a = 6;
    while (a--){
        string c; cin >> c;
        if (c == "V"){
            victor++;
        }
    }
    if (victor >= 5){
        cout << 1;
        exit(0);
    }
    if (victor >= 3){
        cout << 2;
        exit(0);
    }
    if (victor >= 1){
        cout << 3;
        exit(0);
    }
    cout << -1;
    
    return 0;
}