#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        int pos = 0,ans =0;
        for(int i =0;i<n;i++)
        {
            int a;cin>>a;
            ans = max(ans,a-pos);
            pos =a;
        }
        ans = max(ans,2*(x-pos));
        cout<<ans<<'\n';

    }

    return 0;
}