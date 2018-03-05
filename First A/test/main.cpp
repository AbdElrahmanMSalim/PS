#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     set<char> s ;
     string  a ;
     cin>>a;

     int l = a.length();
     while(l--)
     {
         s.insert(a[l]);
         cout << s.at(l);
     }

     if(s.size()%2 !=0)
        cout<<"IGNORE HIM!\n";
     else
        cout<<"CHAT WITH HER!\n";
     return 0;
}
