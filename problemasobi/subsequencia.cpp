#include <bits/stdc++.h>
using namespace std;

int main(){
    int l1, l2; cin >> l1 >> l2;
    vector<int> seq(l1); for (auto& x: seq) cin >> x;
    vector<int> sub(l2); for (auto& x: sub) cin >> x;

  
    if(l2 > l1){
        cout << "N";
    }
    else{
        int p1 =0;
        int p2 =0;

        while (p1 < l1 && p2 < l2){
            if (seq[p1] == sub[p2]){
                if(p2 == l2-1){
                    cout << "S";
                    exit(0);
                }
                p1++;
                p2++;
            }
            else{
                p1++;
            }

        }
        cout << "N";
    }


    return 0;
}