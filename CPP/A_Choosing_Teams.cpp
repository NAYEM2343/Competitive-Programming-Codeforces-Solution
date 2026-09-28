#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(5-arr[i]>=k)
        {
            count++;
        }
    }
    int ans = count/3;
    cout<<ans<<endl;

    return 0;
}