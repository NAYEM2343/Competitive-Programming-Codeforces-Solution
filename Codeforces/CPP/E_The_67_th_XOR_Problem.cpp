#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int m=0;
    vector<int> val(n);
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m = max(m, val[i]^val[j]);
        }
    }
    cout<<m<<endl;

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