#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >>n;
    if(n<2|| n>100000)return -1;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int mini[n], maxi[n];
    mini[0] = abs(a[0] - a[1]);
    maxi[0] = abs(a[n-1] - a[0]);

    mini[n-1] = abs(a[n-2] - a[n-1]);
    maxi[n-1] = abs(a[n-1] - a[0]);
    for(int i=1; i<n-1; i++){

        if(abs(a[i] - a[i+1]) > abs(a[i] - a[i-1])){
            mini[i] = abs(a[i] - a[i-1]);
        }
        else{
            mini[i] = abs(a[i] - a[i+1]);
        }
        if (abs(a[i] - a[n-1]) > abs(a[i] - a[0])){
            maxi[i] = abs(a[i] - a[n-1]);
        }
        else{
            maxi[i] = abs(a[i] - a[0]);
        }
    }

    for(int i=0; i<n; i++)
        cout<<mini[i]<<" " << maxi[i]<<endl;
    return 0;
}
