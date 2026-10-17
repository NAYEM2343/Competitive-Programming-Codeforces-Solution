#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,x,y;cin>>n>>m>>x>>y;
    int s =0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
    }
    for(int i=0;i<m;i++)
    {
        cin>>s;
    }
    
    cout<<n+m<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}