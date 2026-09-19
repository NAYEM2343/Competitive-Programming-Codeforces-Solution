#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]= abs(x);
    }
    sort(arr,arr+n);
    
    if(arr[0]==0) cout<<0<<endl;
    else
    {
        int value = abs(arr[0]);
        cout<<value<<endl;
    }

    return 0;
}