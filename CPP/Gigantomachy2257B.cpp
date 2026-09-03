#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    
    long long a1, temp;
    cin >> a1;
    for(int i = 0; i < n - 1; i++) {
        cin >> temp;
    }
    
    long long b1;
    cin >> b1;
    for(int i = 0; i < m - 1; i++) {
        cin >> temp;
    }
    
    long long bea = a1 + n - 1;
    long long ver = b1 + m - 1;
    
    if(bea >= ver) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    
    return 0;
}