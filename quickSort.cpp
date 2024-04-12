#include <bits/stdc++.h>
#define ll long long


using namespace std;


void quickSort(ll arr[], int l, int r) {
    if (l >= r) return;
    int mid = (l + r) / 2;
    int pivot = arr[mid];
    int low = l, high = r;
    while (low <= high) {
        while (arr[low] < pivot) ++low;
        while (arr[high] > pivot) --high;
        if (low <= high) {
            swap(arr[low], arr[high]);
            ++low;
            --high;
        }
    }
    quickSort(arr, l, high);
    quickSort(arr, low, r);
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

    quickSort(arr, 0, n);

    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}


