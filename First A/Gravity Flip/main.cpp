#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 1 || n > 100)return -1;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i] < 1 || arr[i] > 100) return-1;
    }
    for(int k=0; k<n-1; k++){

        for(int i=0; i<n-1; i++){
            int dif = arr[i] - arr[i+1] ;

            if(dif > 0){            // the second is smaller

                arr[i+1] += dif;
                arr[i] -= dif;
            }
        }
    }

    for(int i=0; i<n; i++) {
            cout << arr[i]<< " ";
    }

    return 0;
}
