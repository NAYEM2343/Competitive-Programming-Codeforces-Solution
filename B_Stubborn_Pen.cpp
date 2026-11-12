#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int st =0;
    char ex ='R';
    for(int i=0;i<n;i++)
    {
        if(s[i]!=ex)
        {
            st++;
        }
        ex = (s[i]=='R') ? 'B' :'R';
    }
    cout<<st<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}