#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
    for (int k = 1; k <= n; k++) {
        long long total = 1ll*k*k*(k*k-1)/2;
        long long attack = k>2 ? 4ll*(k-1)*(k-2) : 0;
        cout << total-attack << " ";
    }
    cout << endl;
}
