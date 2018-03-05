#include <iostream>

using namespace std;

int main()
{
    int p,c;

    cin >> p;
    cin >> c;
    if(p>1000 || p<1 || c <1 ||c > 9) return-1;
    int s,f=1;
    int x=1;
    while(true){
        s = (f*p -c) % 10;
        if(x*p % 10 == 0){

            cout<<x;
            break;
        }
        if (s != 0){
            x++;
            f++;
            continue;
        }

        cout<<f;
        break;
        }
    return 0;
}
