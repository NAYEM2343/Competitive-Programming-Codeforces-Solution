#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin>>a>>b;
    int k = abs(a-b);
    int val = (k+9)/10;
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