#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin >> s >> n;

    if(s<1 || s>10000 || n<1 || n>1000)return -1;
    int x[n], y[n];
    vector<int> myvec;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
        if(x[i]<1 || x[i]>10000 || y[i]<0 || n>10000)return -1;

        if(s > x[i]){
            s += y[i];
        }
        else{
             myvec.push_back(i);
        }
    }
    bool bo = true;
    while(bo == true){
        bo = false;
        for(int i=0 ; i<myvec.size(); i++){
            if(s > x[myvec[i]]){
                s += y[myvec[i]];
                myvec.erase(myvec.begin()+i);
                bo = true;
            }
        }
    }
    if(myvec.size()!= 0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

    return 0;
}
