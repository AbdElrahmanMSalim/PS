#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;

    bool done = true, sticky= true;
    if(x.length() >200)return -1;
    int n = x.length();
    for(int i=0; i<n; i++){
        if (i>=3 && i<n-3){
            if( x[i] == x[i-3] && x[i+1] == x[i-2] && x[i+2] == x[i-1] ){
                sticky = true;
            }

            else{
                sticky = false;
                done = false;
            }
        }
        while(x[i] == 'W' && x[i+1] == 'U' && x[i+2] == 'B' ){
                i+=3;
                if(done == false && sticky == false ){

                    done = true;
                    cout<<" ";
                }

        }

        sticky = true;
        cout<<x[i];
    }
    return 0;
}
