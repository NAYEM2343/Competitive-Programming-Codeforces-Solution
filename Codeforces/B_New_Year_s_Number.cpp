#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    while(n%2020 !=0)
    {
        if(n%2021==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        n-=2021;
        if(n<2020)
        {
            cout<<"NO\n";return;

        }
        
    }
    cout<<"YES\n";
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