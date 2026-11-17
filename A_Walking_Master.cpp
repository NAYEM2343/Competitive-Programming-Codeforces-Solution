#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(d<b)
    {
        cout<<-1<<endl;
        return;
    }

    int move = (d-b);
    a+=move;

    if(a<c)
    {
        cout<<-1<<endl;
        return;
    }
    move +=(a-c);
    cout<<move<<endl;


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