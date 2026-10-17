#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin>>s;
    string a = s.substr(0,2);
    for(int i=3;i<s.size();i+=2)
    {
        a+=s[i];
    }
    
    cout<<a<<endl;
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