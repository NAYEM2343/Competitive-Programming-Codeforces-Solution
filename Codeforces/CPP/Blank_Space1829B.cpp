#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0,pos=0;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            if(a==0)
            {
                cnt++;
            }
            else
            {
                pos = max(pos,cnt);
                cnt=0;
            }
        }
        cout<<max(pos,cnt)<<endl;
    }

    return 0;

}