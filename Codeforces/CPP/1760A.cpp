#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int arr[] = {a,b,c};
    sort(arr, arr+3);
    cout<<arr[1]<<endl;
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