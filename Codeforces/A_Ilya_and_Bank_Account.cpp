#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    if(n>0)
    {
        cout<<n<<endl;
    }
    else
    {
        int x = n/10;
        int y = n/100;
        int z = (y*10) + n%10;
        int result = max(x,z);
        cout<<result<<endl;
    }

    return 0;
}