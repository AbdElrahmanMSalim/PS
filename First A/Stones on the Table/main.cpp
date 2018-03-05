#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int cou=0;
    cin >> n ;
    if (n < 1 || n > 50) return -1;
    string str;
    cin >> str;
    if(str.length() > n) return -1;
    if(str[n-1] != 'R' && str[n-1] != 'G' && str[n-1] != 'B') return -1;
    for(int i=0; i<n-1; i++){
        if(str[i] != 'R' && str[i] != 'G' && str[i] != 'B') return -1;
        if(str[i] == str[i+1]){
            cou++;
        }
    }
    cout<< cou;
    return 0;
}
