#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int host[n];
    int guest[n];
    int count =0;
    for(int i=0;i<n;i++)
    {
        cin>>host[i];
        cin>>guest[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(host[i]==guest[j])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}