#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,x;cin>>n>>k>>x;
    if(n%2==1 && x==1 || x==k)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(x>k)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    cout<<n<<endl;
    while(n != 0)
    {
        n-=1;
        cout<<1<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}