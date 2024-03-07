#include <iostream>

#ifndef N
#define N 10
#endif

using namespace std;

void swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void Shell_sort(int arr[], int begin, int end){
    for(int sorted = end - 1; sorted != 0; --sorted){
        for(int i = sorted - 1; i != end -1; ++i){
            if(arr[i] <= arr[i+1]){
                break;
            }
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    Shell_sort(arr, 0, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
