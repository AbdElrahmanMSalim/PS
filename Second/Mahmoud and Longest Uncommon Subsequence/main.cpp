#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;

    cin >> a;
    cin >> b;


    int lenB=0,i=0,j=0,left1=0,left2=0;


        while(i != a.length()){

            if (a[i] == b[j]){
                j++;

            }
            else{
                j=0;
            }

            i++;
        }


        int k=0,l=0;
        while(k != b.length()){

            if (a[l] == b[k]){
                l++;

            }
            else{
                l=0;
            }

            k++;
        }



        if(j == b.length()){
            if(l == a.length()){
                cout<<-1;
            }
        }
        else{
            for(int p=0; p<b.length()-j; p++){
                left1++;
            }
            for(int o=0; o<a.length()-l; o++){
                left2++;
            }

            if (left1>=left2){
                if(j==0){
                    cout<<left1;
                }
                else{
                    cout<<left1+1;
                }
            }
            else{
                if(l==0){
                    cout<<left2;
                }
                else{
                    cout<<left2+1;
                }
            }
        }


    return 0;
}
