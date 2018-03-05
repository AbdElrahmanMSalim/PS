#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n>> m;
    if (n<1 ||m<1 || n>100 || m>100)return -1;
    int counter=0;
    while(n>0 && m>0){
        m--;
        n--;
        counter++;
    }
    if (counter%2 ==0)cout<<"Malvika";
    else cout<<"Akshat";

    return 0;
}
