#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; cin >> a;
    unordered_map<char, int> letters;

    for (const char c: a)letters[c] = 1;

    if (letters.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}