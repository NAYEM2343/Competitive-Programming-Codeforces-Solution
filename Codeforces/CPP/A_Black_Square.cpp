#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[5];
    for(int i=1;i<=4;i++ )
    {
        cin>>arr[i];
    }
    string s;cin>>s;
    int sum = 0;
    for(int i=0;i<s.size();i++)
    {
        sum += arr[s[i]-'0'];
    }
    cout<<sum<<endl;

    return 0;
}