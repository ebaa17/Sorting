#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define el '\n'
#define ll  long long
#define ld  long double
#define all(x) x.begin(), x.end()
#define yes "YES\n"
#define no "NO\n"
//#define test int test;cin>>test;while(test--)
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0, j, least; i < n; ++i) {
        for (j= i+1, least = i; j < n; ++j)
            if (a[least]>a[j]) least = j;
        swap(a[least], a[i]);

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
    selectionSort(a,n);
    for (int x:a)
        cout<<x<<' ';

}


