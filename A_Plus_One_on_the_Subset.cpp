#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> val(n);
    for(int i = 0; i < n; i++) {
        cin >> val[i];
    }
    
    int mins = INT_MAX;
    int maxs = INT_MIN;

    for(int i = 0; i < n; i++) {
        mins = min(mins, val[i]);
        maxs = max(maxs, val[i]);
    }
    cout << maxs - mins << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}