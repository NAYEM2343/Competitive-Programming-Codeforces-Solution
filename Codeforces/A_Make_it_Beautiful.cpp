#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long  n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    long long min_val = arr[0];
    long long max_val = arr[n-1];

    if(min_val == max_val)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<max_val<<" "<<min_val<<" ";
        for(long long i=1;i<n-1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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