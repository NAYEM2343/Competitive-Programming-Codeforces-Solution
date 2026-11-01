#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> val(n);
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    int Int_max =100000;
    
    int p1 = 0;
    int p2 = 0;
    for(int i=0;i<n-1;i++)
    {
        int min = 0;
        min = abs(val[i]-val[i+1]);
        if(min<Int_max)
        {
            p1 = i+1;
            p2 = i+2;
            Int_max = min;
        }

    }
    int value = 0;
    value=abs(val[0]-val[n-1]);
    if(value<Int_max)
    {
        p1 = 1;
        p2 = n;
    }
    cout<<p1<<" "<<p2<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}