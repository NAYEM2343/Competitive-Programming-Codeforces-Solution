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
        vector<int> vec(n); for(auto &x : vec) cin>>x;

        
        int odd =0;
        int four =0;
        int notfour =0;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]%2==1)
            {
                odd++;
            }
            else if(vec[i]%4==0)
            {
                four++;
            }
            else if(vec[i]%4 !=0)
            {
                notfour++;
            }
        }
        int high = max({odd,four,notfour});
        
        cout<<high<<endl;
    }

    return 0;
}