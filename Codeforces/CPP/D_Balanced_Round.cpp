#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    vector<int> val(n);
    int max_len=1;
    int current_len =1;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    sort(val.begin(),val.end(),greater<int>());
    for(int i=0;i<n-1;i++)
    {
        if(val[i]-val[i+1]<=k)
        {
            current_len++;
        }
        else
        {
            current_len=1;
        }
        max_len = max(max_len,current_len);
    }
    int vals = n-max_len;
    cout<<vals<<endl;
    
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