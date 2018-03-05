#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;

    int cnt=0;
    cin >>s;
    for (int i=0 ;i<s.size();i++){
    if (s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')

            cnt++;
    }


    cout<<cnt<<endl;
    return 0;
    }
