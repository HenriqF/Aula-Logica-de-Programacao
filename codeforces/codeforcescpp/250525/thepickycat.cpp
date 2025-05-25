#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin>>tt;
    while(tt--){
        int size; cin>>size;
        vector<int> nums(size); for(auto &x: nums) cin>>x;
        int bigger = 0, smaller = 0;

        for (const int i: nums){
            if (abs(i) > abs(nums[0])){
                bigger++;
            }
            else if (abs(i) < abs(nums[0])){
                smaller++;
            }
        }

        //cout << endl << bigger << " " << smaller << endl << endl;
        if (bigger >= smaller || smaller-bigger == 1){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}
//oloco foi de primeira