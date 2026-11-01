#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    if(vec.size() != n)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
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