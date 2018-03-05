#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin>>x;

    bool boo= false;
    if(x.length() >200)return -1;
    for(int i=0; i<x.length(); i++){

        if (x[i] == 'W' && x[i+1] == 'U' && x[i+2] == 'B' ){
            boo = true;
            i +=3;
            for(int j=i; j<x.length(); j++){
                if((x[j] == 'W' && x[j+1] == 'U' && x[j+2] == 'B')){
                    if (x[j] == x[j-3] && x[j+1] == x[j-2] && x[j+2] == x[j-1] ){
                        cout<<" ";
                    }
                    boo = false;
                    i = j-1;
                    break;

                }

                cout<<x[j];
            }

        }
        else if(!boo){
            cout<<x[i];
            if((x[i+1] == 'W' && x[i+2] == 'U' && x[i+3] == 'B')){
                if (x[i] != x[i-3] ){
                    cout<<" ";
                    }
            }
        }

    }






    return 0;
}
