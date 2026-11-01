#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;
    vector<long long> vec(3*n);
    long long val = n+1;
    for(int i=0;i<n;i++)
    {
        vec[3*i] = i+1;
        vec[3*i+1] = val;
        vec[3*i+2] = val+1;
        val+=2;
    }
    for(auto it : vec)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
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