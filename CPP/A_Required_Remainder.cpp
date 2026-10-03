#include <bits/stdc++.h>
using namespace std;

void solve() {
     int x, y,n;cin>>x>>y>>n;
     int ans = ((n-y)/x)*x+y;
     cout<<ans<<endl;
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