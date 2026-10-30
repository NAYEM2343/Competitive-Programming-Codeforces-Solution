#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector <int> vec;
    int a;cin>>a;
    vec.push_back(a);
    for(int i=1;i<n;i++)
    {
        int b;
        cin>>b;
        if(b>=a)
        {
            vec.push_back(b);
            a=b;
        }
        else
        {
            vec.push_back(b);
            vec.push_back(b);
            a=b;
        }
    }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}