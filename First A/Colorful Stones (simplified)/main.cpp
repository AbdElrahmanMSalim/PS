#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    if(s.length()<1 || s.length() > 50 || t.length()<1 || t.length()>50) return -1;
    int counter=1;

        int i=0;
        for(int j=i; j<t.length() ; j++){

            if(s[i] != 'R' && s[i] != 'G' && s[i] != 'B' || t[j] != 'R' && t[j] != 'B' && t[j] != 'G')return -1;
            if(s[i] == t[j]){
                counter++;
                i = i + 1;
            }
        }



    cout<<counter;

    return 0;
}
