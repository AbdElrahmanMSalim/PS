#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    set<char> mySet;
    for(int i=0;i<s.length();i++){
        if(s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == ' '){
            continue;
        }
        mySet.insert(s[i]);
    }

    cout<<mySet.size();;
    return 0;
}
