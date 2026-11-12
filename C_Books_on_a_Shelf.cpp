#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vector<long long > left, extra , right;
    int k=0;
    int i=0;
    while(i<n)
    {
        int val = vec[i];
        int count=0;
        while((i<n)&& vec[i]==val)
        {
            count++;
            i++;
        }
        k+=min(2,count);
        left.push_back(val);
        if(count>=2)
        {
            right.push_back(val);
        }
        for(int c=2;c<count;++c)
        {
            extra.push_back(val);
        }
        cout<<k<<"\n";
        for(int x:left)
        {
            cout<<x<<" ";
        }
        for(int x:extra)
        {
            cout<<x<<" ";
        }
        for(int j=(int)right.size()-1;j>=0;--j)
        {
            cout<<right[j]<<" ";
        }
        cout<<"\n";


    }
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