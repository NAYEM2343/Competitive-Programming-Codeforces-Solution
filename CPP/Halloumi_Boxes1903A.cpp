#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        if(is_sorted(vec.begin(),vec.end()))
        {
            cout<<"YES"<<endl;
        }
        else if(k>2)
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