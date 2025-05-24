#include <bits/stdc++.h>
using namespace std;

int main(){
    string out, a; cin >> a;
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    for (const char &x : a){
        if(x != 'a' &&x != 'e'&&x != 'i'&&x != 'o'&&x != 'u'&&x != 'y'){
            out += '.';
            out += x;
        }
    }
    cout << out;
    
    
    return 0;
}