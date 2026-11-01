#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin>>s;
    int val =s.size();
    s.replace(val-2,2,"i");
    cout<<s<<endl;
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