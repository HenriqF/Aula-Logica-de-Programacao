#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    int co = 0;

    while(tt--){
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b+c > 1){
            co++;
        }
    }

    cout << co;
    return 0;
}