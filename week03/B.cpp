#include <iostream>
#include <cmath>

using namespace std;


void doub_sis(int *arr, int S, int Num){
    if(Num != 0)
    {
    if(Num%2 == 1){
        arr[S-1] = 1;
    }
    doub_sis(arr, S-1, Num/2);
    }
}    


int main()
{
    int N = 32;
    int Arr[N] = {0};
    int num;
    cin >> num;

    doub_sis( Arr, N, num);

    for(int i = 0; i < N; i++){
        cout << Arr[i];
    }

    return 0;
}
