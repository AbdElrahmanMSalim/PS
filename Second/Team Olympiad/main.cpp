#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<1 || n>5000)return -1;
    int a[n];
    int ones=0,twos=0, threes=0;
    vector<int> oS;
    vector<int> tS;
    vector<int> thS;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] <1 || a[i] > 3)return -1;
        if(a[i] == 1 ){
            ones++;
            oS.push_back(i);
        }
        else if( a[i] == 2){
            twos++;
            tS.push_back(i);
        }
        else if(a[i] == 3){
            threes++;
            thS.push_back(i);
        }
    }
    int minimum;
    minimum = min(ones,twos);
    minimum = min(minimum,threes);
    cout<<minimum<<endl;

    for(int i=0; i<minimum; i++){
        cout<<oS.at(i)+1<<" " << tS.at(i)+1<<" " <<thS.at(i)+1<< endl;
    }
    return 0;
}
