#include <bits/stdc++.h>
using namespace std;

int closestNumber(int a, int b, int x) {
    double goal = pow(a, b);
    double skendel = round(goal/x)*x;
    
    return (int)skendel;
}
