#include <iostream>
#include <random>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    char a[k];
    if(n<2 || n>100 || k<2 || k > min(n,26))return -1;
    srand (time(NULL));
    for(int i=0; i<k+1; i++){
        a[i] = 97 + i;
    }

    int counter=0;
    for(int i=0; i<n/k +1; i++ ){
        for(int j=0; j<k && counter <n; j++){
            cout<< a[j];
            counter++;

        }
    }

    return 0;
}
