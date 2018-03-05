#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n>100 || n<1)return -1;
    string *s;
    s = new string [100];

    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    int x;
    for(int i=0; i<n; i++){
        if(s[i].size() >10){
            x=s[i].size()-1;
            cout<< s[i][0]<< x-1<<s[i][x]<<endl;
        }
        else{
            cout<< s[i]<<endl;
        }
    }
    delete[] s;

    return 0;
}
