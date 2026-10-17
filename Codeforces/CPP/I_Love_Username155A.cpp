#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int temp;
    cin>>temp;
    int min = temp;
    int max = temp;
    n--;
    while(n--)
    {
        int value;
        cin>>value;
        
        if(min<value)
        {
            min = value;
            count++;
        }
        else if(max>value)
        {
            max = value;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}