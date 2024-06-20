#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

void merge(vector<pair<int, int>> &arr, int l, int m, int r, bool (*cmp)(pair<int, int>, pair<int, int>)) {
    int i = 0, j = 0, k = l;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<pair<int, int>> L(n1), R(n2);
    for (int x = 0; x < n1; ++x) {
        L[x] = arr[l + x];
    }
    for (int x = 0; x < n2; ++x) {
        R[x] = arr[m + 1 + x];
    }
    while (i < n1 && j < n2) {
        if (cmp(L[i], R[j])) {
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

void mergeSort(vector<pair<int, int>> &a, int l, int r, bool (*cmp)(pair<int, int>, pair<int, int>)) {
    if (l >= r)
        return;
    int mid = l + (r - l) / 2;
    mergeSort(a, l, mid, cmp);
    mergeSort(a, mid + 1, r, cmp);
    merge(a, l, mid, r, cmp);
}

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int32_t main() {
    fast
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    mergeSort(a, 0, n - 1, cmp);

    for (const auto &p : a) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
