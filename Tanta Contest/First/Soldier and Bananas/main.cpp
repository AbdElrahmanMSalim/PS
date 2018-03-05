#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin >> k >> n>> w;
    if (k<1 || w < 1 || k>1000 || w > 1000 || n<0)return -1;

    int total=0;
    for (int i=1; i<=w; i++){
        total += i*k;
    }
    if (total <= n)
        cout<<"0";
    else{
        cout<< total - n;
    }
    return 0;
}
