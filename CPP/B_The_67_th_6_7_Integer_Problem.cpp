#include <bits/stdc++.h>
using namespace std;

void solve() {
    int sum=0;
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+7);
    for(int i=0;i<6;i++)
    {
        sum-=arr[i];
    }
    //sum *= -1;
    sum += arr[6];
    cout<<sum<<endl;
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