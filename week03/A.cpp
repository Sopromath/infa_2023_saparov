#include <iostream>
#include <cmath>

using namespace std;


double ar_av(double *arr, int size, double *ptr_A, double *ptr_G){
    double S = 0;
    for(int i = 0; i< size; i++){
        S = S + arr[i];
    }
    *ptr_A = S/size;
    S = 1;
    for(int i = 0; i< size; i++){
        S = S * arr[i];
    }
    *ptr_G = pow(S, 1.0/size);
    return 0;    
}

int main()
{
    int N = 5;

    double av_A = 0;
    double av_G = 0;

    double *ptr_A = &av_A;
    double *ptr_G = &av_G;

    double Arr[N] = {0};

    for(int i = 0; i<N; i++){
        cin>>Arr[i];
    }

    ar_av(Arr,N, ptr_A, ptr_G);
    cout<<av_A<<'\t';
    cout<<av_G;
    return 0;
}
