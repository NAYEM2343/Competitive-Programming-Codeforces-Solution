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
        int a;
        cin>>a;
        int count=0;
        for(int i=0;i<3;i++)
        {
            int z;
            cin>>z;
            if(z>a)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}