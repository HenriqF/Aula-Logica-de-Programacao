#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int count = 0;
    int j = 0 ;

    for(int i=0;i<n;i++){
        if(a[i] >= a[k-1] && a[i] > 0){
            count++;
        }
    }

    cout << count;
    return 0;
}