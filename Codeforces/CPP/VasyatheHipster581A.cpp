#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    int count =0;
    int same =0;

    while(true)
    {
        if(a>0 && b>0)
        {
            a-=1;
            b-=1;
            count++;
        }
        else
        {
            break;
        }
    }
    if(a >1)
    {
        same = a/2;        
    }
    else if(b>1)
    {
        same = b/2;
    }
    cout<<count<<" "<<same<<endl;

    return 0;
    
}