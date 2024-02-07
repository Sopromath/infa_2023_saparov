#include <iostream>

int main()
{
    int A;
    std::cin>>A;
    
    for(int i = 2; i<A; i++)
    {
        if ( A % i == 0 )
        {
            std::cout<<"false";
            return 0;
        }
    }
    
    if (A == 1){
        std::cout<<"false";
        return 0;
    }
    
    std::cout<<"true";
    
    return 0;
}
