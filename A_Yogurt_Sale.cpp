#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    if(2*a<=b)
    {
        cout<<n*a<<endl;
    }
    else
    {
        cout<<(n/2)*b+(n%2)*a<<endl;
    }
    
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