#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s; cin >> s;
    sort(s.begin(), s.end(), greater<char>());
    int val = s[0] - 'a' + 1;
    cout << val << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}