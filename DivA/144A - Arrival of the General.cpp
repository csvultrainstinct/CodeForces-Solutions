#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,maxi=0,maxv=0,mini=0,minv=101;
    cin>>n;
    vector<int>a;
    for(auto i=1;i<=n;i++)
    {
        int ins;
        cin>>ins;
        a.push_back(ins);
        if(ins>maxv)
        {
            maxi=i;
            maxv=ins;
        }
        if(ins<=minv)
        {
            mini=i;
            minv=ins;
        }
    }
    
    if(maxi>mini)
    {
        cout<<(n-mini)+(maxi-1)-1;
    }
    else
    {
        cout<<(n-mini)+(maxi-1);
    }

    return 0;
}
