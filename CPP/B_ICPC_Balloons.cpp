#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    unordered_set<char> distinct_chars(s.begin(),s.end());
    int size = distinct_chars.size();
    cout<<n+size<<endl;
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