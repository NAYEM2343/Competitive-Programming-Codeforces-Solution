#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int x=0;
    for(int i=0;i<n-1;i++ )
    {
        int z;cin>>z;
        x+=z;
    }
    x=x*-1;
    cout<<x<<endl;
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