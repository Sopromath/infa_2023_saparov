#include <iostream>
#include <cmath>

using namespace std;

double f(double x){
    double F = cos(x) - x;
    return F;
}

double df(double x){
    double dF = -sin(x) - 1;
    return dF;
}

double dikhotomia(double A, double B, double E){
    double C = (A+B)/2;
    if(B - A < E){
        return C;
    }
    else{
            if(f(A)*f(C) < 0){
                return dikhotomia(A,C,E);
            }
            else{
                return dikhotomia(C,B,E);
            }
    }
}

double Met_New(double A_0, double E){
    if(f(A_0)*f(A_0 - E) < 0){
        return A_0;
    }
    else{
        double A = A_0 - (f(A_0)/df(A_0));

        return Met_New(A, E);
    }
}

int main(){
    
    double a = 0;
    double b = 1;
    double e = 2.718281828459045;
    double E = pow(e, -5);
    
    cout<< dikhotomia(a,b,E)<<endl;
    cout<< Met_New((a+b)/2,E);
    return 0;
}
