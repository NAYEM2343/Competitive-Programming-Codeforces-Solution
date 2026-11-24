#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    string a;
    cin>>n>>m>>a;

    int freq[7] = {0};
    for(char c:a)
    {
        freq[c-'A']++;
    }
    int needed =0;
    for(int i=0;i<7;++i)
    {
        if(freq[i]<m)
        {
            needed+= (m-freq[i]);
        }

    }
    cout<<needed<<endl;

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