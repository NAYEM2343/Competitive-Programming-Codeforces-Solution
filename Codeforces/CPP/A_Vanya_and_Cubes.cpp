#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int cnt =0; int h=0;
    while(cnt<=n)
    {
        h++;
        cnt+=(h*(h+1)/2);
    }
    cout<<h-1<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}