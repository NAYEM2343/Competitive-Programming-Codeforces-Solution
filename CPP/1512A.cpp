
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];        
    }
    vector<int> s = vec;
    sort(s.begin(),s.end());
    
    for(int i=0;i<n;i++)
    {
        if(vec[i] != s[1])
        {
            cout<<i+1<<endl;
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