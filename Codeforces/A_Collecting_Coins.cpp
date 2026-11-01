#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c , n;cin>>a>>b>>c>>n;
    int x = a+b+c+n;
    if(x%3!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        if(a>x/3 ||b>x/3||c>x/3)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
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