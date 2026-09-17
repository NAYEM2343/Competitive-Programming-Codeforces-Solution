#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin>>s;
    string z = "codeforces";
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(s[i]!=z[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
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