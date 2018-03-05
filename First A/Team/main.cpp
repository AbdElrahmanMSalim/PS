#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    if(n<1 || n>1000) return -1;

    int sum=0;
    int counter=0;
    int x,y,z;
    for(int i=0; i<n; i++){
        cin>> x>> y>> z;

        sum = x+y+z;
        if (sum >= 2){
            counter++;
        }
    }

    cout<< counter;
    return 0;
}
