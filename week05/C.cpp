#include <iostream>

using namespace std;

int** create_array(int N) {
    int** arr = new int*[N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[N];
        for (int j = 0; j < N; j++) {
            arr[i][j] = 0; 
        }
    }
    return arr;
}

void fill_array_spiral(int N, int** arr) {
 
    int n = 1;
    int t = 0; 
    int b = N - 1;
    int l = 0;
    int r = N - 1;
    int d = 0;

    while (n <= N * N) {
        if (d == 0) {
            for (int i = l; i <= r; i++) {
                arr[t][i] = n;
                n++;
            }
            t++;
            d = 1;
        }
        else if (d == 1) {
            for (int i = t; i <= b; i++) {
                arr[i][r] = n;
                n++;
            }
            r--;
            d = 2;
        }
        else if (d == 2) {
            for (int i = r; i >=  l; i--) {
                arr[b][i] = n;
                n++;
            }
            b--;
            d = 3;
        }
        else if (d == 3) {
            for (int i = b; i >= t; i--) {
                arr[i][l] = n;
                n++;
            }
            l++;
            d = 0;
        }
    }
}

void cout_array(int N, int** arr) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {

    int N;
    cin >> N;

    int** Arr = create_array(N);

    fill_array_spiral(N, Arr);

    cout_array(N, Arr);

    for (int i = 0; i < N; i++) {
        delete[] Arr[i];
    }
    delete[] Arr;

    return 0;
}
