#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    queue<char> myQueue;
    cin >>s;
    if (s.length()>100 || s.length() < 1)return -1;
    for (int i=0; i<s.length(); i++){
        if (s[i] != 'A' && s[i] !='O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' && s[i] != 'a' && s[i] !='o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' ){
            myQueue.push('.');
            if(s[i]>=65 && s[i] <= 90){
                myQueue.push(s[i]+32);
            }
            else{
            myQueue.push(s[i]);

            }
        }
    }
    string x;
    while (!myQueue.empty()){

        cout<<myQueue.front();
        myQueue.pop();
    }
    return 0;
}
