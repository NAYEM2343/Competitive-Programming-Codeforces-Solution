#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,y;cin>>x>>y;
    if(x<y)
    {
        cout<<x<<" "<<y<<endl;
    }
    else
    {
        cout<<y<<" "<<x<<endl;
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}