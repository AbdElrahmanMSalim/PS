#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int arr[n][2];
   for(int i=0;i<n;i++){
        for(int j=0;j<2; j++){
            cin >> arr[i][j];
            if(arr[i][j] < 1 || arr[i][j] > 100)return -1;
        }
   }
   if(n<2 || n > 30)return -1;
   int c=0;
   for(int i=0;i<n;i++){
        int cmp = arr[i][1];
        for(int j=0;j<n;j++){
            int cmpee = arr[j][0];
            if (cmp == cmpee && i != j)
                c++;
        }
   }
    cout<<c;
    return 0;
}
