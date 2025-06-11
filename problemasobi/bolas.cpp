#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> b(8); for(auto& x: b) cin >> x;
    sort(b.begin(), b.end());
    for (int i = 4; i<8; i++){
        if (b[i-4] == b[i-3] && b[i-3] == b[i-2] && b[i-2] == b[i-1] && b[i-1] == b[i]){
            cout << "N";
            exit(0);
        }   
    }
    cout << "S";
    return 0;
}