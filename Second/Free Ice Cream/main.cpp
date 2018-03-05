#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    int n;
    long long* x;
    x = new long long ;
    cin>> n>>*x;
    if(n<1|| n>1000 || *x<0 || *x>1000000000 )return -1;
    long long* d;
    d = new long long;
    queue<long long> myQueue;
    queue<string> strQueue;
    string str;
    for(int i=0; i<n; i++){
        cin >> str>>*d;
        if(*d<1 || *d>1000000000 )return -1;
        myQueue.push(*d);
        strQueue.push(str);
    }
    int depressed=0;
    long long *h;
    h= new long long;
    string st;
    for(int i=0; i<n; i++){

        *h=myQueue.front();
        myQueue.pop();
        st = strQueue.front();
        strQueue.pop();
        if(st == "-"){
            if(*h>*x){
                depressed++;
            }
            else{
                *x += -*h;
            }
        }
        else if (st == "+"){
            *x += + *h;
        }
    }
    cout<< *x << " "<<depressed;
    delete h;
    delete x;
    delete d;
    return 0;
}
