#include <bits/stdc++.h>
using namespace std;
int cal(int x)
{
    int sum = 0;
    while(x)
    {
        int dig = x%10;
        sum += dig*dig;
        x /= 10;

    }
    return sum;
}

void solve() {
    int n;cin>>n;
    vector <int> vec;
    map <int , int> mp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        for(int j=0;j<100;j++)
        {
            x = cal(x);
        }
        mp[x]++;
    }
    int ans  = 0;
    for(auto q:mp)
    {
        int k = q.second;
        if(k>1)
        {
            ans += (k*(k-1))/2;
        }

    }
    cout<<ans<<endl;
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