#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s = to_string(n);
    s = s[0];
    int dig = stoi(s);

    int val = 10*(dig-1) + (dig*(dig+1))/2;
    cout<<val<<endl;

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