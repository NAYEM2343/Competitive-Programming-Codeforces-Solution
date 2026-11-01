#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    string s;
    cin>>s;
    int count = 1;
    


    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            if(count>=7)
            {
                break;
            }
            else
            {
                count=1;
            }
            count=1;
        }
    }
    if(count>=7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}