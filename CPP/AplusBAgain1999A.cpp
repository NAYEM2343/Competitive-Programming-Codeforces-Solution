#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int index1 = 0;
        int index2 =1;

        int a = s[index1]-'0';
        int b = s[index2]-'0';

        int c = a+b;
        cout<<c<<endl;
    }

    return 0;
}