#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int count =1;
    int result =0;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]<=vec[i+1])
        {
            count++;
        }
        else
        {
            result=max(result,count);
            count=1;
        }
    }
    result = max(result, count);
    cout<<result<<endl;


    return 0;
}