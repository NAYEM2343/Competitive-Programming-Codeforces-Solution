#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans =0;
        for(int i=0;i<n/k;i++)
        {
            bool non_nhoj = false;
            for(int j=i*k;j<(i+1)*k;j++)
            {
                if(s[j]=='0')
                {
                    non_nhoj = true;
                }
            }
            ans += !non_nhoj;
        }
        cout<<ans<<endl;
    }

    return 0;
}