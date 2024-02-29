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
        for(int j = 0; j < 26; ++j){
            if(d[i] == s[j]){
                d[i] = s[(j-k)%26];
                break;
            }
        }
    }

    cout << d;


    return 0;
}
