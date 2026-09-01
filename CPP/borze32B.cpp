#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
    int len = s.size();
    string value="";


    for(int i=0;i<len;i++)
    {
        if(s[i]=='-'&& s[i+1]=='.')
        {
            value += "1";
            i++;
        }
        else if(s[i]=='.' )
        {
            value += "0" ;
            
        }
        
        else if(s[i]=='-' && s[i+1]=='-')
        {
            value += "2";
            i++;
        }

    }
    
    cout << value <<endl;

    return 0;
}