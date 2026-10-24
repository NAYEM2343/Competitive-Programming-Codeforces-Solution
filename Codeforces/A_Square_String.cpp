#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin>>s;
    int n = s.length();
    if(n%2==1)
    {
        cout<<"NO\n";
    }
    else
    {
        string a = s.substr(0,n/2);
        string b = s.substr(n/2);
        if(a==b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
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