#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int first =0;
        int last = 0;        
        for(int i=0;i<(s.size()/2);i++)
        {
            first += s[i]-'0';
        }
        for(int i=(s.size()/2);i<s.size();i++)
        {
            last += s[i]-'0';
        }
        if(first==last)
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