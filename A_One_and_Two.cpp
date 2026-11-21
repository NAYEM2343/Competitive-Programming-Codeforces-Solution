#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int total = 0;
    int current =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            total++;
        }
    }
    int ans =-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            current++;
        }
        if((current) == (total -current))
        {
            ans = i+1;
            break;
        }
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