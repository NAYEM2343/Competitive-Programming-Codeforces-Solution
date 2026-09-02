 #include <bits/stdc++.h>
 using namespace std;

 int toggle(int a)
 {
    if(a==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }

 int main()
 {
    int grid[3][3];
    int  initialize[3][3];
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>grid[i][j];
            
            initialize[i][j]=1;
        }
    }
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i][j]%2==1)
            {
                initialize[i][j]=toggle(initialize[i][j]);
                if(i<2)
                {
                    initialize[i+1][j]= toggle(initialize[i+1][j]);
                }
                if(i>0)
                {
                    initialize[i-1][j] = toggle(initialize[i-1][j]);
                }
                if(j<2)
                {
                    initialize[i][j+1]= toggle(initialize[i][j+1]);
                }
                if(j>0)
                {
                    initialize[i][j-1] = toggle(initialize[i][j-1]);
                }
            }
        }
    }    
        for (int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<initialize[i][j]<<"";
            }
            cout<<"\n";
            
        }
    
    return 0;
 }