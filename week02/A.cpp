#include <iostream>
using namespace std;

unsigned  gcd(unsigned  a, unsigned  b)
{
    if(a % b == 0){
        return b;
    }
    return gcd(b, a%b);
}


int main()
{
    unsigned  A, B;
    cin>>A>>B;
    cout << gcd(A, B);
    return 0;
}
