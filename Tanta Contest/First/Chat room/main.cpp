#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >>s;
    if (s.length()>100 || s.length() < 1)return -1;
    bool a1=false,a2=false,a3=false,a4=false,a5=false;
    for (int i=0; i<s.length(); i++){
        if(s[i] == 'h')a1 =true;
        if(s[i] == 'e'&& a1 ==true)a2 =true;
        if(s[i] == 'l'&& a1 ==true && a2 == true && a3 == true) a4=true;
        if(s[i] == 'l'&& a1 ==true && a2 == true)a3 =true;
        if(s[i] == 'o'&& a1 ==true && a2 == true && a3 == true && a4==true) a5 = true;

    }
    if (a5 ==true)
        cout<< "YES";
    else{
        cout<< "NO";
    }
    return 0;
}
