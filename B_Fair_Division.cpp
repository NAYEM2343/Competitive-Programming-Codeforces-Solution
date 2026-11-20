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
    long long total =0;
    long long one =0;
    for(long long i=0;i<n;i++)
    {
       total += val[i];
       if(val[i]==1)
       {
            one++;
       }
    }
    if(total%2 !=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    long long half = total/2;
    
    if(half%2==1 && one ==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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