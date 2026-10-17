#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    string x,s;cin>>x>>s;
    int ans = 0;
    for(int i=0;i<6;i++)
    {
        size_t found = x.find(s);
        if(found != string::npos )
        {
            cout<<ans<<endl;
            return;
        }
        x+=x;
        ans++;
    }
    cout<<-1<<endl;
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