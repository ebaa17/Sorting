#include <bits/stdc++.h>
#define ll long long


using namespace std;


void insertionSort(ll arr[], int n) {
    for (int i = 0, j; i < n; ++i) {
        int tmp = arr[i];
        for (j = i; j > 0 && tmp < arr[j - 1]; --j)
            arr[j] = arr[j - 1];
        arr[j] = tmp;

    }
}

int main() {
    cout<<"Array size: ";
    int n;
    cin >> n;
    ll arr[n];
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Sorted array: ";
    insertionSort(a, n);
    for (int i: a) cout << i << ' ';
}

