#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int > vec(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<(n-vec[i]+1)<<" ";
    }
    cout<<endl;
    
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