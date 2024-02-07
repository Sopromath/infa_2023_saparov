#include <iostream>
using namespace std;

int fibonacci(int i)
{
    int f0=1, f1=1;
    if (i == 0)
    {
        return f0;
    }
    else if (i == 1)
    {
        return f1;
    }
    else
    {
        return fibonacci(i-1) + fibonacci(i-2);
    }
}

int main(){
    int i;
    cin >> i;
    cout << fibonacci(i);
    return 0;
}
