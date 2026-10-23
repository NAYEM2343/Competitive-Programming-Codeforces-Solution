#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    vector<int> pre_sum(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pre_sum[i+1] = pre_sum[i] + arr[i];
    }
    long long old_sum = pre_sum[n];
    for(int i=0;i<q;i++)
    {
        int l,r,k;
        cin>>l>>r>>k;

        long long seg_sum = (pre_sum[r]-pre_sum[l-1]);
        long long val = (r-l+1)*k;
        long long result = (old_sum-seg_sum)+val;
        if(result%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
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