#include <bits/stdc++.h>


using namespace std;


void insertionSort(int arr[], int n) {
    for (int i = 0, j; i < n; ++i) {
        int tmp = arr[i];
        for (j = i; j > 0 && tmp < arr[j - 1]; --j)
            arr[j] = arr[j - 1];
        arr[j] = tmp;

    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    insertionSort(a, n);
    for (int i: a) cout << i << ' ';
}

