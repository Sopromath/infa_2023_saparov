#include <iostream>

using namespace std;

double ar_av(double *arr, int size){
    double S=0;
    for(int i = 0; i< size; i++){
        S = S + arr[i];
    }
    return S/size;    
}

int main()
{
    int N = 5;
    double Arr[N] = {0};

    for(int i = 0; i<N; i++){
        cin>>Arr[i];
    }

    cout<<ar_av(Arr,N);
    return 0;
}
