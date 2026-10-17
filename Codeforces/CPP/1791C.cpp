#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int left =0;
    int right = n-1;
    int count =n;
    while(left<right)
    {
        if(s[left]=='0'&& s[right]=='0' || s[left]=='1'&& s[right]=='1')
        {
            cout<<count<<endl;
            return;
        }
        else if(s[left]=='1'&& s[right]=='0' || s[left]=='0'&& s[right]=='1')
        {
            count-=2;
            left++;
            right--;
        }
    }
    cout<<count<<endl;
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