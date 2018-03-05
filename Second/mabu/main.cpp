#include <iostream>

using namespace std;

int main()
{
    int n,y;
    cin >> n;
    bool x = false;
    for ( int i = 0; i<n; i++){
        for (int j =0; j<n; j++){
            y = n%j;
            if(y ==0) {
                x = true;
            }
        }
    }
    if(n)cout<<"yes";
    else cout<<"no";
    return 0;
}
