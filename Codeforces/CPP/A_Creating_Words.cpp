#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a,b;cin>>a>>b;
    string x,y;
    x = a;
    y = b;
    x[0] = b[0];
    y[0] = a[0];
    cout<<x<<" "<<y<<endl;
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