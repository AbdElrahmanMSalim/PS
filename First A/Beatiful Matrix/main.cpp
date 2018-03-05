#include <iostream>

using namespace std;

int main()
{
    int arr[5][5] = {0};
    int raw ;
    int col ;
    int sum = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                raw = i;
                col = j;
                sum += arr[i][j];
            }
        }
    }
    if (sum != 1 ) return -1;

        int counter = 0;

            while(raw>2){
                raw --;
                counter++;
            }
            while(raw<2){
                raw ++;
                counter++;
            }
            while(col>2){
                col --;
                counter++;
            }
            while(col<2){
                col ++;
                counter++;
            }

        cout<< counter;
    return 0;
}
