#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >>n;
    int x1=0,x2=0,x3 = 0;

    for(int i=0; i<n;i++){
        int x,y,z;
        cin >>x>>y>>z;

        x1 +=x;
        x2 +=y;
        x3 +=z;
    }
    if(x1==0 && x2==0 && x3==0){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}