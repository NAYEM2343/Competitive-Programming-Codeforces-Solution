#include <bits/stdc++.h>

using namespace std;



int main()

{

    int n;

    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++)

    {

        cin>>vec[i];

    }

    vec[n-1] +=1;

    if(vec[n-1]==10)

    {

        vec[n-1] = 1;

        vec.push_back(0);

    }

    for(int i=0;i<n;i++)

    {

        cout<<vec[i]<<endl;

    }





    return 0;

}