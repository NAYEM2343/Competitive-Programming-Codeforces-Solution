#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin>>a>>b;
    int c = a+b/2;
    int value = (c-a)+(b-c);
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