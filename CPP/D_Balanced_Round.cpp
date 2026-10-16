#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    vector<int> val(n);
    vector<int> store(n);
    int l=0;
    int j =0;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    sort(val.begin(),val.end(),greater<int>());
    for(int i=0;i<n-1;i++)
    {
        if(val.size()==1)
        {
            cout<<"0"<<endl;
            return;
        }
        if(val[i]-val[i+1]<=k)
        {
            l++;
        }
        else
        {
            l++;
            j++;
            store[j]=l;
            l=0;
        }
    }
    sort(store.begin(),store.end(),greater<int>());
    int vals = n-store[0];
    cout<<vals<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}