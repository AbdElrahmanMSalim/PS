#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> mySet;
    int x[2],y[2];
    cin >> x[0] >> y[0] >> x[1] >> y[1];
    if(x[0] < -100 || y[0] < -100 || x[1] < -100 || y[1] < -100 ||x[0] > 100 || y[0] > 100 || x[1] > 100 || y[1] > 100)return -1;
    double eq = sqrt(pow(x[0]-x[1],2) + pow(y[0]-y[1],2));
    int l;
    mySet.insert(abs(x[0]));
    mySet.insert(abs(x[1]));
    mySet.insert(abs(y[0]));
    mySet.insert(abs(y[1]));
    if (mySet.size()> 2 ){
        cout<<"-1";
        return 0;}

    if(x[0] != x[1] && y[0] != y[1] ){
        l = eq/sqrt(2);
        if(x[0] + l < -1000 || x[0] + l > 1000 ||y[0] + l < -1000 || y[0] + l > 1000 )return -1;

        if(x[0] == y[0] && x[1] == y[1]){
            cout<< min(x[0],x[1]) + l << " " << min(y[0],y[1]) << " " << min(x[0],x[1]) << " " <<  min(y[0],y[1]) + l ;
        }
        else{
            cout<< max(x[0],x[1]) << " " << y[0] + l << " " << min(x[0],x[1]) << " " <<  y[1] - l  ;

        }
    }
    else{
        l = eq;
        if(y[0] + l < -1000 || y[1] + l < -1000 || y[0] + l > 1000 || y[1] + l > 1000 ||x[0] + l < -1000 || x[1] + l < -1000 || x[0] + l > 1000 || x[1] + l > 1000 ) return -1;
        if(y[0] == y[1]){
            cout<< x[0] << " " << y[0] + l << " " << x[1]  << " " <<  y[1] + l ;
        }
        else if(x[0] == x[1]){
            cout<< x[0] + l << " " << y[0] << " " << x[1] + l << " " <<  y[1]  ;
        }

    }
    return 0;
}
