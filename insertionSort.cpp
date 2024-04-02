#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define el '\n'
#define ll  long long
#define ld  long double
#define all(x) x.begin(), x.end()
#define yes "YES\n"
#define no "NO\n"
#define test int test;cin>>test;while(test--)
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
    fast
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    insertionSort(a, n);
    for (int i: a) cout << i << ' ';
}


