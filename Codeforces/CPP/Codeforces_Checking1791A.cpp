#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "codeforces";
    int t;cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        int count =0;
        for(int i=0;i<s.length();i++)
        {
            if(c==s[i])
            {
                count++;
            }
            
        }
        if(count>0)
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