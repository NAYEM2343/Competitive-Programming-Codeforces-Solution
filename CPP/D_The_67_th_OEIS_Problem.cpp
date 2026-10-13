#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int k=1;;
    for(int i=0;i<n;i++)
    {
        cout<<k*(k+2)<<" ";
        k+=2;
    }
    cout<<"\n";

    
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