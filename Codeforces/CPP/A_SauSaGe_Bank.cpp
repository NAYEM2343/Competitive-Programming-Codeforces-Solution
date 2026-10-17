#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    int value = pow(2,n-k+1)+2*(k-1);
    cout<<value<<endl;
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