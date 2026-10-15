#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<int> val(n);
    int sum =0;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    sort(val.begin(),val.end());
    for(int i=0;i<m;i++)
    {
        sum+=val[i];
    }
    cout<<abs(sum)<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}