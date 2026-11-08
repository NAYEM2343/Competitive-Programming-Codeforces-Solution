#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>vec(2*n);
    for(int i=0;i<vec.size();i++)
    {
        cin>>vec[i];
    }
    bool val = true;
    for(int i=0;i<vec.size()-1;i++)
    {
        if((vec[i]+vec[i+1])%2!=1)
        {
            val=false;
        }
        i++;
    }
    if(val==true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
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