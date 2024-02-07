#include <iostream>

using namespace std;

int main(){
    
    int s = 0;
    int S = 0;
    int h = 1;
    int A[h]= {1};
    int B[h]= {1};
    
    while (s == 0){
        
        int A[h];
        for (int i = 0; i<h-1; i++)
        {
            B[i] = A[i];
        }
        cin>>A[h-1];
        
        if(A[h-1] == 0){
            s = 1;
            for (int j = 0;j<h;j++)
            {
                S = S + A[j];
            }
        }
        
        int B[h];
        for (int i = 0; i<h; i++)
        {
            B[i] = A[i];
        }
        
        h++;    
    }

    cout<<S;
    return 0;
}
