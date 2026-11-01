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
        int n,k;
        cin>>n>>k;
        int count =0;
        vector<int> vec(n);
        for(int i=0;i<vec.size();i++)
        {
            int value;
            cin>>value;
            if(value==k)
            {
                count++;
            }
        }
        if(count>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}