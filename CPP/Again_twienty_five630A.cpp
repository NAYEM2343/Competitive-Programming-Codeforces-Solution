#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    
    long long result  = pow(5,3-1);
    result = (result %100)*5;
    result = result %100;
    result = (result * 5 )%100;

    cout<<result;
    return 0;
}