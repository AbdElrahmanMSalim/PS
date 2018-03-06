#include <iostream>

using namespace std;

int main()
{

    int n,m;
    cin >> n >> m;
    if(n<1 || n>10000 || m < 2 || m > 10 )return -1;

    int ones = n%2;
    int twos = n/2;
    int cou=ones+twos;
    if(n < m){
        cout<<"-1";
        return 0;
    }
    while(1){
        if(cou%m != 0){
            twos -= 1;
            ones += 2;
            cou = ones + twos;
        }
        else{
            cout<<cou;
            break;
        }
    }


    return 0;
}
