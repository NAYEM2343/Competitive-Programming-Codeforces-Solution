#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int maxval =0;
    int cnt =0;
    for(int i=0;i<n;i++)
    {
        
        cnt++;
        maxval = max(maxval,cnt);

        if(s[i] !=s[i+1])
        {
            cnt=0;
        }

    }
    cout<<maxval+1<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}