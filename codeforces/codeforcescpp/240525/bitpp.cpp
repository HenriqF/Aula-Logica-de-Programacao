#include <bits/stdc++.h>
using namespace std;

int main(){
    int ops;
    cin >> ops;
    vector<string> a(ops);
    for(int i=0;i<ops;i++){
        cin >> a[i];
    }
    cout << count(a.begin(), a.end(), "++X")+count(a.begin(), a.end(), "X++")-count(a.begin(), a.end(), "X--")-count(a.begin(), a.end(), "--X");
    return 0;
}