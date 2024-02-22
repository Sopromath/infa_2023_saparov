#include <iostream>
#include <fstream>
#include <cmath>
#include <chrono>
#include <random>


using namespace std;

int arr[1000000];
ofstream fout("Lab_pr_1_24.txt");


void slowSearch(int *arr, int size, int value){
    for(int i = 0; i < size; i++){
        if(arr[i] == value){
            break;
        }
    }
}

void binarySearch(int * arr, int size, int value) {
    int l = 0, r = size, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] == value) {
            break;
        }
        if (arr[mid] > value) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
}

void time_slow(int arr[], int size) {
    unsigned seed = 1001;
    default_random_engine rng(seed);
    uniform_int_distribution <unsigned> dstr(0, size - 1);
    auto begin = chrono::steady_clock::now();
    for (unsigned cnt = 100000; cnt != 0; --cnt) {
        slowSearch(arr, size, arr[dstr(rng)]);
    }
    auto end1 = chrono::steady_clock::now();
    auto time_span1 =
        chrono::duration_cast<chrono::milliseconds>(end1 - begin);

    fout << time_span1.count() << " ";

    for (unsigned cnt = 100000; cnt != 0; --cnt) {
        slowSearch(arr, size, 10000000);
    }
    auto end2 = chrono::steady_clock::now();
    auto time_span2 =
        chrono::duration_cast<chrono::milliseconds>(end2 - end1);

    fout << time_span2.count();
}

void time_bin(int arr[], int size) {
    unsigned seed = 1001;
    default_random_engine rng(seed);
    uniform_int_distribution <unsigned> dstr(0, size - 1);
    auto begin = chrono::steady_clock::now();
    for (unsigned cnt = 100000; cnt != 0; --cnt) {
        binarySearch(arr, size, 10000000);
    }
    auto end1 = chrono::steady_clock::now();
    auto time_span1 =
        chrono::duration_cast<chrono::milliseconds>(end1 - begin);

    fout << time_span1.count() << ';';

    for (unsigned cnt = 100000; cnt != 0; --cnt) {
        binarySearch(arr, size, arr[dstr(rng)]);
    }
    auto end2 = chrono::steady_clock::now();
    auto time_span2 =
        chrono::duration_cast<chrono::milliseconds>(end2 - end1);

    fout << time_span2.count();
}


int main()
{
    for (int i = 0; i < 1000000; ++i) {
        arr[i] = i;
    }
    for (int N = 100; N <= 1000000; N = floor(N * 1.05)) {
        fout << N << ';';
        //time_slow(arr, N);
        time_bin(arr, N);
        fout << endl;
    }
    fout << 1000000 << ';';
    //time_slow(arr, 1000000);
    time_bin(arr, 1000000);
    fout << endl;
    fout.close();
    return 0;
}
