#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long layer = max(x, y);
        long long base = (layer - 1) * (layer - 1);
        long long ans;

        if (layer % 2 == 0) {
            if (x == layer)
                ans = base + y;
            else
                ans = base + (2 * layer - x);
        } else {
            if (y == layer)
                ans = base + x;
            else
                ans = base + (2 * layer - y);
        }

        cout << ans << endl;
    }
}