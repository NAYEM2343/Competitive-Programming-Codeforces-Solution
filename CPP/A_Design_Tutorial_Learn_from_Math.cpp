#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    if(n%2==0)
    {
        int x= n-4;
        cout<<4<<" "<< x<<endl;
    }
    else
    {
        int y=n-9;
        cout<<9<<" "<<y<<endl;
    }

    return 0;
}