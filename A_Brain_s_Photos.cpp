#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m,n;
    cin>>m>>n;
    char cp;
    int done =0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>cp;
            if(cp=='C' || cp=='M'|| cp=='Y')
            {
                done =1;
            }
        }
    }
    if(done==1)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}