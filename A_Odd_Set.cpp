#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int odd =0;int even=0;
    for(int i=0;i<2*n;i++)
    {
        int num;
        cin>>num;
        if(num%2!=0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if(odd==n && even==n)
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