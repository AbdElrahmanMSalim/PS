#include <iostream>

using namespace std;

int main()
{
    int y,w,a=0,b;
    cin>> y;
    cin>>w;
    if(y<1 || y>6 || w<1 || w>6)return-1;


    if(y>w){
        a = 7-y;
    }
    else{ // equal or below
        a= 7-w;
    }

    if(a == 6){
        a=1;
        b=1;
    }
    else if(a%2 == 0 ){
        b = 3;
        a = a/2;
    }
    else if(a%2 == 1){
        if(a == 3){
            b=2;
            a=1;
        }
        else{
            b = 6;
        }
    }

    cout<< a<<"/" << b;
    return 0;
}
