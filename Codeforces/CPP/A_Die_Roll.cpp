#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y,w;cin>>y>>w;
    int maximum = max(y,w);
    int dot = 6-maximum+1;
    int value = gcd(dot,6);
    int numarator = dot/value;
    int denomator = 6/value;
    cout<<numarator<<"/"<<denomator<<endl;


    return 0;
}