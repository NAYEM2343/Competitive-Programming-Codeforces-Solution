#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n;
    cin>>a>>b>>n;
    
    string sr = to_string(a);    
    long value =0;
    
    while(true)
    {
        
        string sz = sr + to_string(value);
        long long  num = stoi(sz);
        if(num % b !=0)
        {
            value++;
            if(value>9)
            {
                cout<<-1<<endl;
                break;
            }
        }
        else if(num%b==0)
        {
            string result;
            result = to_string(num);
            for(int i=0;i<n-1;i++)
            {
                result += '0';
            }
            cout<<result<<endl;
            break;
        }
    }

    return 0;

}
