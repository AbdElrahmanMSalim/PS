#include <iostream>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(n<2 || n>100 || k<1 || k>1000 )return -1;
    double tot =0;
    int x[n],y[n];
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
        if(abs(x[i]) > 20 || abs(y[i]) > 20)return -1;
    }

    for(int i=0; i<n-1; i++){
        tot += sqrt(pow(x[i+1]-x[i],2) + pow(y[i+1]-y[i],2));
    }
    cout << fixed << setprecision(9) << tot*k/50;
    return 0;
}
