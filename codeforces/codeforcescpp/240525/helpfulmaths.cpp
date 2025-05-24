#include <bits/stdc++.h>
using namespace std;


int main(){
    int one=0, two=0, thr=0;
    string input;
    cin >> input;
    for (int i = 0; i<input.length(); i++){
        if (input[i] == '1'){
            one++;
        }
        else if (input[i] == '2'){
            two++;
        }
        else if (input[i] == '3'){
            thr++;
        }
    }
    string out;
    for (int o = 0; o < one; o++) out += "1+";
    for (int t = 0; t < two; t++) out += "2+";
    for (int d = 0; d < thr; d++) out += "3+";
    out.pop_back();
    cout << out;
    return 0;
}
