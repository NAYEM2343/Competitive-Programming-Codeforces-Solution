#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;cin>>n;
    int dig = n[0]-'0'-1;
    int len = n.size();
    
    int val = 10*(dig) + (len*(len+1))/2;
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