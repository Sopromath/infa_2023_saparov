#include <iostream>

#ifndef N
#define N 5
#endif

using namespace std;

void swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void comb_cort(int (&m)[N]){
    int k = N-1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - k; j = j+k) {
            if (m[j] < m[j +k]) {
              swap(m[j], m[j + k]);
            }
        }
        if(k != 1){
            k  = k/1.3;  
        }

    }

}

int main() {
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    comb_cort(arr);
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
