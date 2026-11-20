#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag =0;
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(gcd(arr[i],arr[j]) <=2)
            {
                flag=1;
            }
        }
    
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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