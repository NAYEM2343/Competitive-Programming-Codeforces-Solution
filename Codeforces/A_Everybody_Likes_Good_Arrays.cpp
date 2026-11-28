#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;
    vector <long long > value(n);
    for(long long i=0;i<n;i++)
    {
        cin>>value[i];

    }
    long long ans =0;
    long long total =0;

    for(long long i=0;i<n-1;i++)
    {
        if(value[i]%2==value[i+1]%2)
        {
            ans++;
        }
        else
        {
            total+= ans;
            ans =0;
        }
    }
    cout<<total<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}