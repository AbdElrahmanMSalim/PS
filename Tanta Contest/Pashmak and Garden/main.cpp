#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[2],y[2];
    cin >> x[0] >> y[0] >> x[1] >> y[1];
    if(x[0] < -100 || y[0] < -100 || x[1] < -100 || y[1] < -100 ||x[0] > 100 || y[0] > 100 || x[1] > 100 || y[1] > 100)return -1;
    double eq = sqrt((x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]));
    int l;

    if(x[0] != x[1] && y[0] != y[1] ){
        l = lround(eq/sqrt(2));
        if((x[0]-x[1])*(x[0]-x[1]) != (y[0]-y[1])*(y[0]-y[1])){
            cout<<"-1";
            return 0;
        }

        if(x[0] + l < -1000 || x[0] + l > 1000 ||y[0] + l < -1000 || y[0] + l > 1000 )return -1;
        if((x[0] - x[1]) / (y[0]- y[1]) > 0){
            cout<< min(x[0],x[1]) + l << " " << min(y[0],y[1]) << " " << min(x[0],x[1]) << " " <<  min(y[0],y[1]) + l ;
        }
        else{
            cout<< min(x[0],x[1]) + l << " " << max(y[0],y[1])  << " " << min(x[0],x[1]) << " " <<  max(y[0],y[1]) - l  ;
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
