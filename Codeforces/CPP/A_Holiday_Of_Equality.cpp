#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int total = 0;
    int highest =0;
    int n;cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>highest)
        {
            highest=a;
        }
        total+=a;
    }
    int result = (highest*n)-total;
    cout<<result<<endl;

    return 0;
}