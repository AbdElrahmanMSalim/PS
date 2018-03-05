#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0; i<4; i++){
        cin >> arr[i];
        if(arr[i]<0 || arr[i] > 10000) return -1;
    }
    string s;
    cin >> s;
    int sum =0;

    for(int i=0; i<s.length(); i++){

        int ch = s[i];
        ch -= 48;
        if(ch<1 || ch>100000) return -1;
        sum = sum + arr[ch-1];

    }
    cout<<sum;
    return 0;
}
