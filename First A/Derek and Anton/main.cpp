#include <iostream>
#include<string>
using namespace std;

int main()
{
    int A=0,D=0,n;
    string whoWon;
    cin >> n;
    cin >> whoWon;

    if(n != whoWon.length() || n > 100000 || n < 1 ) return -1;

    for(int i=0; i<whoWon.length(); i++){

        if (whoWon[i] != 'A' && whoWon[i] != 'D'){
            return -1;
        }
        else{
            if(whoWon[i] =='A') {
                A++;
            }
            else{
                D++;
            }
        }
    }

    if (A>D) cout<<"Anton";
    else if(A<D) cout<<"Danik";
    else cout<<"Friendship";

}
