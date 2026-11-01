#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while(x!=0)
    {
        int a,b,c;
        cin >>a;
        cin >>b;
        cin >>c;

        if(a+b == c || b+c == a || c+a == b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        x--;
    }
    return 0;
}