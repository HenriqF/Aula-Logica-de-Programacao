#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, v;
    for (int i =0;i<5;i++){
        for (int j =0;j<5;j++){
            int num;
            cin >> num;
            if (num == 1){
                h = i;
                v = j;
            }
            
        }

    }
    cout << abs(h-2) + abs(v-2);

    return 0;
}
