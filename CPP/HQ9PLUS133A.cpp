#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t = "HQ9";
    int count=0;

    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<t.length();j++)
        {
            if(int(s[i])==int(t[j]))
            {
                count++;
            }
        }
    }
    if(count!=0)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0;
}