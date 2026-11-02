#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vec[0]++;
    long long  ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=vec[i];
    }
    cout<<ans<<endl;
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