#include <bits/stdc++.h>


using namespace std;


void quickSort(int arr[], int l, int r) {
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
    int n;
    cin >> n;
    int arr[n];
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}


