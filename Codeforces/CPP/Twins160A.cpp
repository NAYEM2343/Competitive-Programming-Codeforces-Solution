#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<vec.size();i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int value = vec[0];
    int count=0;
    int i=1;
    while(true)
    {
        
        int sum = accumulate(vec.begin()+i,vec.end(),0);
        if(value>sum)
        {
            count++;
            break;
        }
        else
        {
            
            value+=vec[i];
            i++;
            count++;
        }

    }
    cout<<count<<endl;
    

    return 0;
}