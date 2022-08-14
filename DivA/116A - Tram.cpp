#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int maxi=0,sum=0;
    for(auto i=0;i<n;i++){
        int e,a;
        cin>>e>>a;
        sum-=e;
        sum+=a;
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;
    return 0;
}
