#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    string s;cin>>s;
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            a++;
        }
    }
    int val = a*2;
    if(val>n)
    {
        cout<<abs(val-n)<<endl;
    }
    else
    {
        cout<<n-val<<endl;
    }
    

    return 0;
}