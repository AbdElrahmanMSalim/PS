#include <iostream>

using namespace std;

int main()
{
    int n,b,d;
    cin >>n>>b>>d;
    if(n<1 || n>100000 || b<1 || d<1 || b>1000000 || d > 1000000 )return -1;
    int a[n];
    int cnt=0,sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] <= b){
            sum += a[i];
            if(sum > d){
                cnt++;
                sum =0;
            }
        }

    }
    cout <<cnt;


    return 0;
}
