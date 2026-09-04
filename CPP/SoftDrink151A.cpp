#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink = k *l;
    int toast_1 = drink/ nl;
    int toast_2 = c*d;
    int toast_3 = p/np;

    int n_toast = min({toast_1,toast_2,toast_3})/n;

    cout<<n_toast<<endl;

    return 0;

}