#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int st, int fin, int tmp)
{
    if(n == 1)
    {
        cout << st << " -> " << fin << endl;
    }
    else if(n > 1)
    {
        hanoi(n-1, st, tmp, fin);
        cout << st << " -> " << fin << endl;
        hanoi(n-1, tmp, fin, st);
    }
}

int main(){
    
    int N;
    cin>>N;
    
    int a=1,b=2,c=3;
    hanoi(N,a,b,c);
    
    return 0;
}
