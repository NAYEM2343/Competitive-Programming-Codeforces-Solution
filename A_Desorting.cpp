#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    
    long long operation = INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]<=vec[i+1])
        {
           long long diff = vec[i+1] -vec[i];
           long long req_op = diff/2+1;
           operation = min(operation,req_op);
        }
        else
        {
            operation =0;
        } 
    }
    cout<<operation<<endl;
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