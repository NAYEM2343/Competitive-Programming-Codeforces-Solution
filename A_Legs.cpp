#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int val =0;
    while(true)
    {
        if(n%4==0)
        {
            val += n/4;
            break;
        }
        else
        {
            n = n-2;
            val += 1;
        }
        if(n==0)
        {
            break;
        }
    }
    cout<<val<<endl;
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