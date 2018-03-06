#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if(n<3 || n>50 || m <3 || n>50)return -1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i%2 == 0){
                cout<<"#";
            }
            else if(i%2 == 1){
                if(j==m-1 && (i/2)%2 == 0){
                    cout<<"#";
                }
                else if(j==0 && (i/2)%2 != 0 ){
                    cout<<"#";

                }
                else{
                    cout<<".";
                }
            }
        }
        if(i != n-1)cout<<endl;
    }
    return 0;
}
