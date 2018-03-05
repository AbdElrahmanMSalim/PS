#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int upper=0, lower=0;
    if (str.length()>100 || str.length() < 1) return -1;

    for(int i=0; i<str.length(); i++){
        if (str.at(i) >= 65 && str.at(i) <= 90){
            upper++;
        }
        else if(str.at(i) >= 97 && str.at(i)<= 122){
            lower++;
        }
    }

    for (int i=0; i<str.length(); i++){

        if (upper > lower  ){
            if(str.at(i)>= 97 && str.at(i) <= 122)
            str.at(i) -= 32;
        }

        if ((upper < lower || upper == lower)  ){
            if(str.at(i) >= 65 && str.at(i)<= 90)
            str.at(i) += 32;
        }
    }
    cout<< str;
    return 0;
}
