#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;cin>>n;
    n/=2;
 
    if(n%2==1)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    
    for(int i=1;i<=n;i++)
    {
        cout<<i*2<<" ";
    }
    
    for(int i=1;i<n;i++)
    {
        cout<<(i*2)-1<<" ";
    }
    cout<<3*n-1<<"\n";
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}