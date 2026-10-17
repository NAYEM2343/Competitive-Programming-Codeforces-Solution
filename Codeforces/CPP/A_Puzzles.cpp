#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int best = 1000000;
    sort(arr,arr+m);
    for(int i=0;i<=m-n;i++)
    {
        best = min(best,arr[i+n-1]-arr[i]);
    }
    cout<<best<<endl;

    return 0;
}