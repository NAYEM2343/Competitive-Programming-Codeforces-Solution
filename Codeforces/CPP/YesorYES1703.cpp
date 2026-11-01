#include <bits/stdc++.h>
#include <string>
using namespace std;

string upper(string str)
{
    transform(str.begin(),str.end(),str.begin(),::toupper);
    return str;
}
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(upper(s)=="YES")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    
    solve();
    return 0;
}
