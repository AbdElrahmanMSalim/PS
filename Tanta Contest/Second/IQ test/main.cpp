#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    if(n<3 || n >100)return -1;

    int x[n];
    for(int i=0; i<n; i++){
        cin >> x[i];
        if(x[i]<1 || x[i]>100)return -1;

    }
    int sum[n-1];
    for(int j=0; j<n-1; j++){
        sum[j] = x[j+1]-x[j];
        cout<<sum[j] << " ";
    }
    sort(sum,sum+n-1);
    int gt;
    for(int k=0; k<n-1; k++){
        if(sum[k] == sum[k+1]){
            gt = sum[k];
            break;
        }
    }

    for(int l=0; l<n-1; l++){
        if(x[l]+gt != x[l+1]){
            if(l == 0 && (x[l]+2*gt != x[l+2])){
                cout<<l+1;
            }
            else{
                cout << l+2;
            }
            break;
        }
    }


    return 0;
}
