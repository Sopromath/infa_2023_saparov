#include <iostream>
#include <cmath>

using namespace std;

int  double_sistem(int  a)
{
    int N = 0, s=0;
    while (a != 0){
        N = N + a%2 * pow(10,s);
        a = a/2;
        s++;
    }
    return N;
}


int main()
{
    int  A;
    cin>>A;
    cout << double_sistem(A);
    return 0;
}
