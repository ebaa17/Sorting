#include <bits/stdc++.h>
#define ll long long


using namespace std;

void bubbleSort(ll arr[], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
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

    bubbleSort(arr, n);

    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}


