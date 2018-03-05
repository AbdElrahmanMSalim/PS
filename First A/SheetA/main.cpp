#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h ;
    int num[n];
    int i=0,w=0;

    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
        if(num[i]>h){
            w++;
        }
        w++;
    }
    cout <<w;
    return 0;
}
