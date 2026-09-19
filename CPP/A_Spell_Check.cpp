#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    if(n!=5)
    {
        cout<<"NO"<<endl;
        return;
    }
    string target = "Timur";
    sort(s.begin(),s.end());
    sort(target.begin(),target.end());
    if(s==target) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {solve();}

    return 0;
}