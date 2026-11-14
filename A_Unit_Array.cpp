#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;
    vector<long long > arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long  pos=0;long long  neg =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    long long op =0;
    while(pos<neg || neg%2==1)
    {
        op++;
        neg--;
        pos++;
    }
    cout<<op<<endl;
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