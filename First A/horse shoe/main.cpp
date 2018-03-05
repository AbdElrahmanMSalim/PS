#include <iostream>
#include <set>
using namespace std;

int main()
{
    int s[4];
    for(int i=0; i<4;i++){
        cin >>s[i];
        if(s[i]< 1 || s[i] > 1000000000)return -1;
    }
    set<int> myset;

    for (int i=0; i<4;i++){
        for(int j=i; j<4 ; j++)
            if(s[i] == s[j] && i!= j){
                myset.insert(s[j]+i);
            }

    }
    cout<<myset.size();
    return 0;
}
