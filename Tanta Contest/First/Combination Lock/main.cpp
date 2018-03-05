#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >>n;
    if (n<1 || n>1000)return -1;

    string in,out;
    cin>> in>> out;
    if(in.length() != n || out.length() != n)return -1;


    int sum1,sum2,cou =0;
    for (int i=0; i<n; i++){
        sum1 = abs(int(in[i]) - int(out[i]));
        sum2 = abs(10- max(int(in[i]),int(out[i]))+min(int(in[i]),int(out[i])));
        cou += min(sum1,sum2);
    }


    cout<<cou;
    return 0;
}
