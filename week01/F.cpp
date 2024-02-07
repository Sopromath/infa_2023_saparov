#include <iostream>

int kollats(int x_i, int S)
{
    if(x_i % 2 == 0){
        x_i = x_i/2;
        S++;
    }
    else if(x_i != 1){
        x_i = 3 *x_i + 1;
        S++;
    }
    if(x_i != 1){
        return kollats(x_i,S);
    }
    else{
        return S;
    }
}

using namespace std;
int main()
{
    int s = 0;
    int X;
    cin>>X;
    
    cout << kollats(X,s);

    return 0;
}
