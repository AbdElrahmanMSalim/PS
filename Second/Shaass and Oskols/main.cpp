#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int a[n];
    if
    for(int i=0; i<n; i++)cin>> a[i];
    cin >> m;
    int x,y;
    for(int i=0; i<m; i++){
        cin >>x;
        cin >>y;
        if(x-2 >= 0){
            a[x-2] += y-1;
            a[x] += a[x-1]-y;
            a[x-1] = 0;
        }
        else if(x-2 <0){
            a[x] += a[x-1]-y;
            a[x-1] = 0;
        }
        else if(x==m){
            a[x-2] += y-1;
            a[x-1] = 0;

        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
