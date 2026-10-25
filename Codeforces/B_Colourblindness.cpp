#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s1;cin>>s1;
    string s2;cin>>s2;
    int cnt =0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i] || s1[i]=='G' && s2[i]=='B' ||  s1[i]=='B' && s2[i]=='G' )
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
    }
    if(cnt !=0)
    cout<<"YES\n";
    else cout<<"YES\n";
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