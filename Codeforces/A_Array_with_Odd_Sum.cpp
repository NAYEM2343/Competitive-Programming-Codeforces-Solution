#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    bool odd = false;  // Fixed: must start as false
    bool even = false;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        if (x % 2 != 0) odd = true;
        else even = true;
    }
    
    if (sum % 2 != 0 || (odd && even)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}