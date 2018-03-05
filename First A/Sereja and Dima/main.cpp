#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 1 || n > 1000) return -1;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if (a[i]< 1 || a[i] > 1000) return -1;
    }
    int inPointer = 0;
    int Sereja=0, Dima =0;
    int outPointer = n-1;
    for(int i=0; i<n; i++){
        if(a[inPointer] > a[outPointer]){

            if(i%2 ==0)
                Sereja += a[inPointer];
            else if(i % 2 != 0)
                Dima += a[inPointer];

            inPointer++;

        }
        else{

            if(i%2 == 0)
                Sereja += a[outPointer];
            else if(i % 2 != 0)
                Dima += a[outPointer];
            outPointer--;
        }
    }
    cout << Sereja << " " << Dima;
    return 0;
}
