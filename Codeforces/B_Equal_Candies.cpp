#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int > vec(n);
    int mn = INT_MAX; int sum =0;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        mn = min(mn,vec[i]);

    }
    for(int i=0;i<n;i++)
    {
        sum+=vec[i]-mn;
    }
    cout<<sum<<endl;

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