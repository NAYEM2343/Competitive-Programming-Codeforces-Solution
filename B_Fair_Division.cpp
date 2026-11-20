#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    vector<long long> val(n);
    for(long long i=0;i<n;i++)
    {
        cin>>val[i];
    }
    long long one =0;
    long long two =0;
    for(long long i=0;i<n;i++)
    {
        if(val[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    if(one%2==0 && two%2==0)
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
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}