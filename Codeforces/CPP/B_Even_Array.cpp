#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%2!=i%2)
        {
            if(i%2==0)
            {
                a++;
            }
            else{
                b++;
            }
        }
    }
    if(a!=b)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<a<<endl;
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