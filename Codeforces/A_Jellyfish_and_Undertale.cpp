#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,n;
    cin>>a>>b>>n;
    long long ans= b;
    
    for(int i=0;i<n;i++)
    {
        
        long long x;
        cin>>x;
        ans += min(a-1,x);

    }
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