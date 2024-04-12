#include <bits/stdc++.h>

#define ll long long


using namespace std;

void shellSort(ll arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            ll tmp = arr[i], j;
            for (j = i; j >= gap && tmp < arr[j - gap]; j-=gap)
                arr[j] = arr[j - gap];
            arr[j] = tmp;
        }

    }
}

int main() {
    cout << "Array size: ";
    int n;
    cin >> n;
    ll arr[n];
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Sorted array: ";

    shellSort(arr, n);

    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}



