#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int max=0;
    for( int i=0;i<n;i++)
    {
        int a;cin>>a;
        if(a>max)
        {
            max=a;
        }
    }
    max = n*max;
    cout<<max<<endl;
    
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