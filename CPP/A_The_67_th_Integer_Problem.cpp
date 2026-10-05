#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;cin>>x;
    int y = x+1;
    if(y==67)
    {
        y=x;
    }
    cout<<min(x,y)<<endl;
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