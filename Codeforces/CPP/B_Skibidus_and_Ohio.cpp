#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s ;cin>>s;
    int cnt =0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1])
        {
            cnt++;
        }
    }
    if(cnt !=0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<s.size()<<endl;
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