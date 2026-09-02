#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char ch = s[0];
    if(!isupper(ch))
    {
        s[0] = toupper(s[0]);
    }
    
    cout<< s<< endl;

    return 0;
}