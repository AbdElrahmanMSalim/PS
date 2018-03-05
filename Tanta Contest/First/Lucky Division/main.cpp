#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    if (n<1 || n>1000)return -1;
    int lucky[12] = {4,7,44,77,47,74,474,477,747,774,444,777};
    bool yes=false;
    for(int i=0; i<12; i++){
        if(n%lucky[i] == 0){
            yes = true;
            break;
        }
    }
    if(yes)cout<<"YES";
    else{
    cout<<"NO";
    }

    return 0;
}
