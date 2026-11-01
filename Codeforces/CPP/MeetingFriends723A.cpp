#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    int x1 = abs(x-y);
    int x2 = abs(z-y);
    int x3 = abs(z-x);


    int result = (x1+x2+x3)/2;

    cout<<result<<endl;

    return 0;
}