#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;cin>>k;
    for(int i=1;;i++)
    {
        if(i%3==0 || i%10==3 )
        {
            continue;
        }
        if(--k==0)
        {
            cout<<i<<endl;
            break;
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