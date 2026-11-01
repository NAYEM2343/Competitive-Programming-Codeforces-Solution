#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l, r;
    int count1=0;
    int count2=0;
    int result=0;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l==0)
        {
            count1++;
        
        }
        if(r==0)
        {
            count2++;
        }
    }
    
    if(n-count1>=count1)
    {
        result+=count1;
    }
    else
    {
        result += (n-count1);
    }
    if(n-count2>=count2)
    {
        result+=count2;
    }
    else
    {
        result += (n-count2);
    }
    

    cout<<result<<endl;


    return 0;
}