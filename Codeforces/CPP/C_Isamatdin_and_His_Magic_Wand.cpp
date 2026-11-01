#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int odd=0;
    int even =0;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        if(vec[i]%2==1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if(odd==n || even==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<"\n";

    }
    else
    {
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<"\n";

    }
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