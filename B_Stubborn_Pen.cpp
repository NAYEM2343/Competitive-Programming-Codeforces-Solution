#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int B=0;
    int R=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='B')
        {
            B+=2;
            i++;
        }
        if(s[i]=='R' && s[i+1]=='R')
        {
            R+=2;
            i++;
        }

    }
    cout<<max(B,R)<<endl;
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