#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    if(vec[0]==1)
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