#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n<1 || n> 100)return -1;
    int remaining=0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<1 || arr[i] > 100)return -1;
        remaining += arr[i];
    }

    int mine=0,coins=0,i=n;
    sort(arr,arr+n);
    while (mine<=remaining){
        i = i-1;
        mine += arr[i];
        remaining -= arr[i];
        coins++;

    }

    cout<<coins;
    return 0;
}
