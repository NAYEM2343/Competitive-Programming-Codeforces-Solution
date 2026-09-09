#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
          
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    int a=arr[3]-arr[2];
    int b=arr[3]-arr[1];
    int c=arr[3]-arr[0];

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;

}