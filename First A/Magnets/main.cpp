#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    if (n > 100000 || n < 1) return -1;
    string a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        if (a[i] != "01" && a[i] != "10") return -1;
    }
    int counter = 1;
    for(int j=0; j<n-1; j++){

        if ((a[j] == "10" && a[j+1] == "01") or (a[j] == "01" && a[j+1] == "10")) {
            counter++;
        }
    }
    cout << counter;

    return 0;
}

