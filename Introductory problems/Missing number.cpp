#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector < int > a(n);
    set < int > s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
 
    for (int i = 1; i <= n; i++) {
        if (!s.count(i)) cout << i << " ";
    }
    cout << endl;
}