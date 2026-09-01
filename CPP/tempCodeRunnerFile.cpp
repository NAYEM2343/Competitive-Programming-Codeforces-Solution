#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int t;
    cin >>t;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B' && s[i+1]=='G')
        {
            s[i]='G';
            s[i+1]='B';
            i+=t;
        }
    }
    cout<< s<< endl;

    
    
    
    
    
    return 0;
}