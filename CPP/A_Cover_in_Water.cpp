#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;cin>>s;
    if(s.find("...")!= string::npos)
    {
        cout<<2<<endl;
    }
    else
    {
        int count = 0;
        for(int i;i<n;i++)
        {
            if(s[i]=='.')
            {
                count++;
            }
        }
        cout<<count<<endl;
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