#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    char x;
    if(s.length()>100)return -1;
        for(int j=0; j< s.length()-1 ; j++){
            for(int i=0; i< s.length()-2 ; i++){
                if(s[i] != '1' and s[i] != '2' and s[i] != '3' and s[i] != '+')return -1;
                if(s[i] > s[i+2] ){
                    x = s[i];
                    s[i] = s[i+2];
                    s[i+2] = x;
                }
            }
        }

    cout<<s;
    return 0;
}
