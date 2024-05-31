#include <bits/stdc++.h>
using namespace std;

int partition (vector<int>& v, int l, int r){
    int i = l;
    for (int j = i+1; j <= r; ++j) {
        if(v[j]<v[l])
            swap(v[j], v[++i]);
    }
    swap(v[l], v[i]);
    return i;
}

void quickSort(vector<int>& v, int l, int r){
    if(l>=r)
        return;
    int mid = partition(v, l, r);
    quickSort(v, l, mid - 1);
    quickSort(v, mid + 1, r);
}


int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    quickSort(v,0,n-1);
    for (int x:v) cout<<x<<' ';
}

