#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int > arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pos=0;int neg =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }
    int op =0;
    while(pos<neg || neg%2==1)
    {
        op++;
        neg++;
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