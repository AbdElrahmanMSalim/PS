#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<1 || n>100 )return -1;
    int p[n], q[n];

    int cou=0;
    for(int i=0; i<n; i++){
        cin>>p[i]>>q[i];
        if(p[i] <0 || p[i]>100 || q[i] <0 || q[i]>100 || q[i]<p[i] )return -1;
        if (q[i]-p[i]>1) {
            cou++;
        }
    }
    cout<<cou;
    return 0;
}
