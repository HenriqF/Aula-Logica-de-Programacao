#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map <string, int> d = {{"norte",0},{"sul",180},{"leste",90},{"oeste",270}};

    string a, b; cin >> a >> b;
    // if (a == "norte" && b == "oeste" || a == "oeste" && b == "norte"){
    //     cout << 90;
    //     exit(0);
    // }
    // cout << abs(d[a]-d[b]);
    int OPMlowdiffs = abs(d[a] - d[b]);
    int m = min(OPMlowdiffs, 360 - OPMlowdiffs);

    cout << m << "\n";

    return 0;
}