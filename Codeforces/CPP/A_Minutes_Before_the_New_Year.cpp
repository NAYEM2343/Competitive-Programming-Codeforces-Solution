#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h,m;cin>>h>>m;
    int value = 1440 - 60*h - m;
    cout<<value<<endl;
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