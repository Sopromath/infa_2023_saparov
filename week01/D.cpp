#include <iostream>
#include <cmath>

#ifndef N
#define N 5  // actual size of the array
#endif

using namespace std;

int main(){
    
    int S = 0;

    int n=N;
    
    cin>>n;
    
    int A[N] = {0};
    
    for (int i = 0; i<N; i++) {
        cin >> A[i];
    }
    
    for (int j = 0;j<N;j++)
    {
        S = S + A[j];
    }
    
    S = S/N;
    cout<<S;
    
    return 0;
}
