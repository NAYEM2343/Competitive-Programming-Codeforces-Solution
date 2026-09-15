#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    string result = "";

    
    for(int i=0;i<s.length();i++)
    {
        if(s.substr(i,3)=="WUB")
        {
            i+=2;
            if (!result.empty() && result.back() !=' ')
            {
                result+=" ";
            }
        }
        else
        {
            result += s[i];
        }

    }

    cout<<result<<endl;

    return 0;
}