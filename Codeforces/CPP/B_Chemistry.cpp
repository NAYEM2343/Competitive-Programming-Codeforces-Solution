#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int cnt =0;
    for( auto it:mp)
    {
        if(it.second%2!=0)
        {
            cnt++;
        }
    }
    if(cnt-1<0) cnt =0;
    else cnt = cnt-1;
    if(k>=cnt )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}