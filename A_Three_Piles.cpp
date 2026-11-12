#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        c=c-1;
        a=a+1;
        if(a==b && b==c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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