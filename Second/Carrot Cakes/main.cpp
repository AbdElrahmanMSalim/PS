#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    float n,t,k,d;
    cin >> n>>t>>k>>d;
    if(n<1 || t<1|| k<1 || d<1 || n>1000 || t>1000 || k>1000 || d>1000)return-1;
    float x = ceil(n/k);
    if(x*t > (t+d)){
        cout<<"YES";
    }
    else{
        cout<< "NO";
    }
    return 0;
}
