#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    vector<int> position(100001);
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        position[val]=i;

    }
    cin>>m;
    long long count1=0,count2=0;
    for(int i=0;i<m;i++)
    {
        int target;
        cin>>target;
        int pos = position[target];
        count1+=pos;
        count2+=(n-pos+1);
    }

     
    cout<<count1<<" "<<count2<<"\n";
    return 0;
}