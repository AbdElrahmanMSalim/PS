#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    if(n<1 || n>100 || d<1 || d>10000)return -1;

    int x[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin >> x[i];
        if(x[i]<1 || x[i]>100)return -1;
        sum += x[i];
    }

    if((sum + 10 * (n-1) )>d){
        cout<<"-1";
        return 0;
    }

    cout<<(d-sum)/5;
    return 0;
}
