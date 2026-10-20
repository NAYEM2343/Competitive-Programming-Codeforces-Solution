#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    for(int i=0;i<3;i++)
    {
        string s;cin>>s;
        int x = s[0] + s[1] + s[2];
        if(x != 198)
        {
            if(x==196)
            {
                cout<<'A'<<endl;
            }
            else if (x==195)
            {
                cout<<'B'<<endl;
            }
            else if (x==194)
            {
                cout<<'C'<<endl;
            }

            
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}