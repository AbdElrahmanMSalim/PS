#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int counter=0;
    int mi=0,pl=0;

    int n= str.length()-1;
    if(str.length() < 1 || str.length()>100) return -1;

    for(int i=-1; i!= n; i++){

        if (i==-1){
            mi =  abs(str[0]-96 - ('a' - 96));
            pl = 'a' - 96 + str[0]-96;
            if ( mi > 13){

            if(pl > 26)
                counter += 26- (str[0]-96) + ('a'-96)  ;

            else
                counter+= -mi + 26;
        }
        else{
            counter += mi;}
            continue;
        }
        else{

            mi = abs(str[i+1]-96 - (str[i]-96));
            pl = str[i+1]-96 + str[i]-96;
        }

        if ( mi > 13){

            if(pl > 26){
                if(str[i+1] > str[i]){
                    counter += 26- (str[i+1]-96) + (str[i]-96)  ;
                }
                else{
                    counter += 26- (str[i]-96) + (str[i+1]-96)  ;
                }
            }
            else
                counter+= -mi + 26;
        }
        else
            counter += mi;

    }
    cout<<counter;

    return 0;
}
