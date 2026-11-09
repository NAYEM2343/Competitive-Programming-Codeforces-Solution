#include <bits/stdc++.h>
using namespace std;

void solve() {
    char a ;cin>>a;
    string val;cin>>val;
    string c=val;
    string r ="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(a=='R')
    {
        for(int i=0;i<val.size();i++)
        {
            int index = r.find(val[i]);
            c[i] =r[index-1];
        }

    }
    else
    {
        for(int i=0;i<val.size();i++)
        {
            int index = r.find(val[i]);
            c[i] =r[index+1];
        }
    }
    cout<<c<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}