#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int maxi=max(x,max(y,z));
    int mini=min(x,min(y,z));
    int middle=x+y+z-maxi-mini;
    int res=0;
    res+=(maxi-middle);
    res+=(middle-mini);
    cout<<res<<endl;
    
    return 0;
}
