#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int x = 240-k;
    int position =0;

    for(int i=1;i<=n;i++)
    {
        if(x>=5*i)
        {
            x -= 5 * i;
            position = i;
        }
    }
    cout<<position<<endl;

    return 0;
}