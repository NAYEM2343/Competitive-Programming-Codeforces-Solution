#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sereja=0;
    int dima=0;
    vector<int> vec(n);

    for(int &element: vec)
    {
        cin>>element;
    }
    int i=0;
    int j=n-1;
    int val = 0;
    while(i<=j)
    {
        
        if(val%2==0)
        {
            if(vec[i]>vec[j])
            {
                sereja += vec[i];
                i++;
            }
            else
            {
                sereja+= vec[j];
                j--;
            }
            val++;
        }
        else
        {
            if(vec[i]>vec[j])
            {
                dima += vec[i];
                i++;
            }
            else
            {
                dima+= vec[j];
                j--;
            }
            val++;
        }
        
    }
    

    cout<<sereja<<" "<<dima<<endl;

    return 0;
}