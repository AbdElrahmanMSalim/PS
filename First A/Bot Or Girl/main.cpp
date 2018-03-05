#include <iostream>
#include <string>
using namespace std;

int main()
{
    string in;
    cin>>in;
    if (in.empty() or in.length() > 100 ) return -1;
    int doCount =0;

    for(int i=0; i<in.length(); i++){
        char ch = in.at(i);

        for (int j=0; j<in.length(); j++){
            size_t found =in.find(in.at(j));
            if (ch == in.at(j) && i !=j && found != string::npos && ch != 48){
                doCount++;
                in.replace(found,1,"0");
            }
        }
    }

    if((((in.length()) % 2) + doCount )% 2 == 0){
    cout << "CHAT WITH HER!";
    }
    else{
    cout<< "IGNORE HIM!";
    }
    return 0;
}

