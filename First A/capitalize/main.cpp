#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    if (a.length() > 1000 and a.length() != 0){
        return -1;}
    if (a.at(0) > 96 and a.at(0) < 123)
        a.at(0) = a.at(0) - 32;

    cout << a;
    return 0;
}
