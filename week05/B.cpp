#include <iostream>

using namespace std;

int main()
{
    string s("abcdefghijklmnopqrstuvwxyz");

    int k;
    cin >> k;

    string d;
    cin >> d;

    for(int i = 0; i < d.size(); ++i){
        if(d[i] > 'a' + 25){
            break;
        }
        if(d[i] < 'a'){
            break;
        }
        else{
            d[i] = 'a' +(d[i] - 'a' - k + 26)%26;
        }
    }

    cout  <<d;

    return 0;
}
