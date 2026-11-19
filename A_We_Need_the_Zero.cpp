#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long arrayxor = 0;
    for(int i=0;i<n;i++)
    {
        arrayxor = arrayxor xor arr[i];
    }
    if(n%2==0)
    {
        if(arrayxor==0)
        {
            cout<<"7"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    else
    {
        cout<<arrayxor<<endl;
    }

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