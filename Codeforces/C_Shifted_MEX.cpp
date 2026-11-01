#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> vec(n);
    for(auto &x:vec)
    {
        cin>>x;
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    n = vec.size();
    int current=0;
    int best = 0;
    for(int i=0;i<n;i++)
    {
        if(i==0|| vec[i] != vec[i-1]+1)
        {
            current=0;
        }
        current++;
        best=max(best,current);
    }
    cout<<best<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    

    return 0;
}