#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int value =0;
    for(int i=0;i<n;i++)
    {
        string s ;
        cin>>s;
        if(s=="Icosahedron")
        {
            value += 20;
        }
        else if (s=="Dodecahedron")
        {
            value+=12;
        }
        else if(s=="Octahedron")
        {
            value+=8;
        }
        else if(s=="Cube")
        {
            value+=6;
        }
        else if(s=="Tetrahedron")
        {
            value+=4;
        }

    }
    cout<<value<<endl;
    return 0;
}