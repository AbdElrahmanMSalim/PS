#include <iostream>

using namespace std;
bool step(int a[3]);
string x;
int main()
{

    cin>>x;

    bool c1= false,c2 = false;
    if(x.length() >200)return -1;
    int n = x.length();
    for(int i=0; i<n; i++){

        if(step(i)){
                i+=2;
                for(int j=i+1; j<i+4; j++){

                    if(step(&j)){ //the following is wub
                        c2=true;
                    }
                    else{
                        c2=false;
                    }
                }
                if(c2 == false){
                    if(c1 == true){
                    cout<<" ";
                    c1 = false;
                    c2 = true;
                }}
        }
        else{
            cout<<x[i];
            c1=true;
        }

    }

    return 0;
}

bool step(int a1){

    if (x[a1] == 'W' && x[a1+1] == 'U' && x[a1+2] == 'B' ){
        return true;
    }
    else{
        return false;
    }

}
