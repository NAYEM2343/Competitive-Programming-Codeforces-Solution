#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k,x;
    cin>>n>>k>>x;
    long long min = k*(k+1)/2;
    long long max = n*(n+1)/2-(n-k)*((n-k)+1)/2;
    
    if(x>=min && x<=max)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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