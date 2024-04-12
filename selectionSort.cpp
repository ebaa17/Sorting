#include <bits/stdc++.h>
#define ll long long


using namespace std;

void selectionSort(ll a[], int n) {
    for (int i = 0, j, least; i < n; ++i) {
        for (j= i+1, least = i; j < n; ++j)
            if (a[least]>a[j]) least = j;
        swap(a[least], a[i]);

    }
}

int main() {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    selectionSort(a,n);
    for (int x:a)
        cout<<x<<' ';

}


