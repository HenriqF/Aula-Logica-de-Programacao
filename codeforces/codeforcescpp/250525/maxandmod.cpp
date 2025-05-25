#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt; cin >> tt;
    while (tt--){
        int c; cin >> c;
        if (c %2 == 0){
            cout << "-1" << endl;
        }
        else{
            vector<int> a(c);
            a[0] = c;
            for (int i = 1; i<c; i++){
                a[i] = i;
            }
            for (const int x: a)cout << x << " ";
            cout << endl;
        } 

    }
}