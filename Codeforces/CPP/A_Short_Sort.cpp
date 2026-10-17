#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin>>s;
    for(int i=0;i<1;i++)
    {
        if(s[0]=='c' && s[2]=='a')
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='c' && s[2] != 'a')
        {
            cout<<"NO"<<endl;
        }
        else if(s[0]!='c' && s[2] == 'a')
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
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