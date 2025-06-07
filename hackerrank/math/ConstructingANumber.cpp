#include <bits/stdc++.h>
using namespace std;

//https://www.hackerrank.com/challenges/constructing-a-number/problem?isFullScreen=true
/*
 * Complete the 'canConstruct' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

string canConstruct(vector<int> a) {
    
    int sum = 0;
    for(int x : a){
        while (x != 0){
            sum += x%10;
            x = x/10;
        } 
    }
    if (sum%3==0){
        return "Yes";
    }
    else{
        return "No";
    }
    // Return "Yes" or "No" denoting whether you can construct the required number.
}