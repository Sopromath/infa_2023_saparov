#include <iostream>
#include <cmath>
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

int double_fibonacci(int i)
{
    double fi;
    int F;
    fi = (1 +sqrt(5))/2;
    F = (pow(fi, i) - (pow(-fi,-i)))/(2*fi - 1);
    return F;
}

int main(){

    int i = 0;
    
    while(double_fibonacci(i+1) == fibonacci(i)){
        i++;    
    }
    
    cout<<i;
    
    return 0;
}
