#include <bits/stdc++.h>
using namespace std;

void solve() {
    int e , o;cin>>e>>o;
    int n = e+o;
    if(n==1)
    {
        if(e)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            
        }
        return;
        
    }
    if(e>o)
    {
        cout<<"No"<<endl;
        return;
    }
    if(e==0 && n%2==0)
    {
        cout<<"No"<<endl;
        return;
    }
    if(o==0)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    if(e==0)
    {
        for(int i=2;i<=n;i++)
        {
            cout<<1<<" "<<i<<endl;
        }
    }
    else
    {
        for(int i=2;i<=2*e;i++)
        {
            cout<<i-1<<" "<<i<<endl;
        }
        int ext = e*2;
        for(int j=ext+1;j<=n;j++)
        {
            cout<<ext<<" "<<j<<endl;
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