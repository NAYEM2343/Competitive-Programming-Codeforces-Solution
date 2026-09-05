#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int i =1;
    int count =0;
    while(true)
    {
        
        if(k*i%10==0)
        {
            count++;
            break;
        }
        else if(k*i%10==r)
        { 
            count++;
            break;
        }
        else
        {
            count++;
            i++;

        }
    }
    cout<<count<<endl;

    return 0;
}