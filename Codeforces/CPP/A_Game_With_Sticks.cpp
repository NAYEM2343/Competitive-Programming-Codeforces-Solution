#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    int k = min(n,m);
    if(k%2==1)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }

    return 0;
}