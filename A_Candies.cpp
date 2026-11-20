#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;

    for(int i=2;i<=40;i++)
    {
        int den = pow(2,i)-1;
        if(n%den==0)
        {
            cout<<n/den<<endl;
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