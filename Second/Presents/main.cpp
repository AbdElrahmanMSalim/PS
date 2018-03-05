#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>100 || n<1)return-1;
    int temp;
    int p[n];
    for(int i=0; i<n; i++){
        cin>> temp;
        if(temp >n )return-1;
        p[temp-1] = i+1;
    }

    for(int i=0; i<n; i++){
        cout<< p[i] << " ";
    }

    return 0;
}
