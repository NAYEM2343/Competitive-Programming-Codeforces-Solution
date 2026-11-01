#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin>>n>>k;

    if(k<=(n+1)/2)
    {
        cout<<(2*k-1)<<endl;
    }
    else
    {
        long long pos = k-((n+1)/2);
        cout<<(2*pos)<<endl;
    }
    return 0;

}