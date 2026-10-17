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
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<vec.size();i++)
        {
            cin>>vec[i];
        }

        sort(vec.begin(),vec.end());
        bool ok = true;
        for(int i=1;i<n;i++)
        {
            ok &= (vec[i]-vec[i-1]) <= 1;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
    return 0;

}