#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k; cin >> n >> k;
    vector<int> notas(n); for(auto& x: notas) cin >> x;

    sort(notas.begin(), notas.end());
    reverse(notas.begin(), notas.end());

    cout << notas[k-1];

    return 0;
}