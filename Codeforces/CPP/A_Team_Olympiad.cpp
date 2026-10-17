#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
     
    vector<int> prog;
    vector<int> math;
    vector<int> PE;
    for(int i=1;i<=n;i++)
    {
        int r;
        cin>>r;
        if(r==1)
        {
            prog.push_back(i);
        }
        else if(r==2)
        {
            math.push_back(i);
        }
        else
        {
            PE.push_back(i);
        }
    }
    int w = min({prog.size(), math.size(), PE.size()});
    cout<<w<<endl;
    for (int i = 0; i < w; i++) {
        cout << prog[i] << " " << math[i] << " " << PE[i] << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}