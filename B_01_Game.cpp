#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;cin>>n;
    int s1 =0;int s2=0;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='0')
        {
            s1++;
        }
        else
        {
            s2++;
        }
    }
    if(min(s1,s2)%2==1)
    {
        cout<<"DA"<<endl;
    }
    else
    {
        cout<<"NET"<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}