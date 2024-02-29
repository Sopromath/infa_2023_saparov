#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int g = 1;
    int n = s.size();
    for(int i = 0; i < n/2; ++i){
        if(s[i] != s[n-i-1]){
            g = 0;
            break;
        }
    }

    if(g == 1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}
