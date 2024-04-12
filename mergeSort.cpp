#include <bits/stdc++.h>
#define ll long long


using namespace std;

void merge(ll arr[], int l, int m, int r) {
    int i = 0, j = 0, k = l
    , n1 = m - l + 1
    , n2 = r - m;
    int L[n1], R[n2];
    for (int x = 0; x < n1; ++x) {
        L[x] = arr[l + x];
    }
    for (int x = 0; x < n2; ++x) {
        R[x] = arr[m + 1 + x];
    }
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(ll a[], int l, int r) {
    if (l >= r)
        return;
    int mid = l + (r - l) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
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
    mergeSort(a,0,n-1);
    for (int i: a) cout << i << ' ';
}


