#include <bits/stdc++.h>
#define ll long long


using namespace std;

void countSort(ll arr[], int n){
    map<ll,int> num_of;
    for (int i = 0; i < n; ++i) {
        num_of[arr[i]]++;
    }
    int idx = 0;
    for (auto it = num_of.begin(); it!=num_of.end(); ++it) {
        arr[idx] = it->first;
        for (int i = 0; i<it->second; ++i) {
            ++idx;
            arr[idx] = it->first;
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
    countSort(arr, n);

    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}


