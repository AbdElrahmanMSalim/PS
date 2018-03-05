#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n <1 || n > 100000) return -1;
    int a[n];
    int crimes=0,police=0;
    for (int i=0; i<n; i++){
        cin >> a[i];

        if(a[i]< 0 && a[i] != -1) return -1;

        if(a[i] == -1 && police == 0)
            crimes++;

        if(a[i] > 0)
            police += a[i];

        if(a[i] == -1 && police != 0)
            police--;
    }

    cout << crimes;
    return 0;
}
