#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,n;cin>>x>>n;
    if(n%2==1)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<"0"<<endl;
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