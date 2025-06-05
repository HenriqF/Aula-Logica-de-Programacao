#include <bits/stdc++.h>
using namespace std;

int main(){
    string input; cin >> input;

    set<string> seen;

    int leng = input.size();
    int c=0,e=0,u=0,p=0;

    for (int i =0; i<leng; i+=3){
        string current = input.substr(i, 3);
        string naipe = input.substr(i+2, 1);

        if (seen.find(current) != seen.end()){
            if (naipe == "C"){
                c = -1;
            }
            else if (naipe == "E"){
                e=-1;
            }
            else if (naipe == "U"){
                u=-1;
            }
            else if (naipe == "P"){
                p=-1;
            }
        }
        else{
            seen.insert(current);
            if (naipe == "C" && c != -1){
                c++;
            }
            else if (naipe == "E" && e != -1){
                e++;
            }
            else if (naipe == "U" && u != -1){
                u++;
            }
            else if (naipe == "P" && p != -1){
                p++;
            }
        }

    }

    c != -1 ? cout << 13-c : cout << "erro"; cout << "\n";
    e != -1 ? cout << 13-e : cout << "erro"; cout << "\n";
    u != -1 ? cout << 13-u : cout << "erro"; cout << "\n";
    p != -1 ? cout << 13-p : cout << "erro"; cout << "\n";


    return 0;
}