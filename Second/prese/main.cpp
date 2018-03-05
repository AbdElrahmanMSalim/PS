#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    int p[n];
    for(int i=0; i<n; i++){
        cin>> temp;
        p[temp-1] = i+1;
    }

    for(int i=0; i<n; i++){
        cout<< p[i];
    }

    return 0;
}
