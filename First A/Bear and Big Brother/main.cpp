#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a < 1 || a > 10 || a > b || b<1 || b > 10) return -1;

    int year=0;
    do{
       a = a*3;
       b = b*2;
       year++;

    }while( a <= b );
    cout<< year;
    return 0;
}
