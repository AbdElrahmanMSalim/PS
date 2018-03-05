#include <iostream>

using namespace std;

int main()
{







    int n;
    cin>>n;
    if(n<2 || n> 100)return -1;

    int arr[n];
    int maxi =0;
    int mini =n-1;
    for(int i=0; i<n; i++){
        cin>> arr[i];
        if(arr[i]<1 || arr[i]>100)return -1;

    }

    for(int i=0; i<n; i++){
        if(arr[i]>arr[maxi] && maxi < i)maxi = i;
        if(arr[i]<=arr[mini] )mini = i;
    }
    if (n==2 && arr[0]>arr[1]){
        cout<<0;
    }
    else if (n==2 && arr[0]<arr[1]){
        cout<<1;
    }
    else if (maxi > mini ){
        cout<< maxi+n-mini-2;
        }
    else if (mini> maxi){
        cout<< maxi+n-mini-1;

        }


    return 0;
}
