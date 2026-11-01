#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<long long , long long> freq_map;

    for(int i=0;i<n;i++)
    {
        freq_map[arr[i]]++;
    }
    if(freq_map.size()>=3)
    {
        cout<<"NO\n";
    }
    else
    {
        long long f1 = freq_map.begin()->second;
        long long f2 = freq_map.rbegin()->second;
        if(f1==f2)
        {
            cout<<"YES\n";
        }
        else if(n%2==1 && abs(f1-f2)==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
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