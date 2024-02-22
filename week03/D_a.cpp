#include <iostream>
#include <cmath>

using namespace std;

int binarySearch(int * arr, int size, int value) {
    int l = 0, r = size, result = -1, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] == value) {
            result = mid;
        }
        if (arr[mid] > value) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return result;

}

int main()
{
    int N = 32;
    int Arr[N] = {0};
    int t;
    cin >> t;

    for (int i = 0; i < N; ++i) {
        Arr[i] = 2*i;
    }

    cout<<binarySearch(Arr, N, t);

    return 0;
}
