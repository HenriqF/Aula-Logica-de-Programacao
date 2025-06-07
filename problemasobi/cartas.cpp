#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> c(5); for (auto& x: c) cin >> x;
    vector<int> copy(5);
    copy = c;

    sort(copy.begin(), copy.end());
    if (c == copy){
        cout << "C";
        exit(0);
    }

    reverse(copy.begin(), copy.end());
    if(c == copy){
        cout << "D";
    }
    else{
        cout << "N";
    }


    return 0;
}