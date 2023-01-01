#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,c=0,ans=0;
    cin>>n;
    vector<int>a;
    for(auto i=0;i<n;i++)
    {
        int ins;
        cin>>ins;
        c+=ins;
    }
    for(auto i=1;i<=5;i++)
    {
        a.push_back(c+i);
    }
    for(auto i=0;i<a.size();i++)
    {
        if(a[i]%(n+1)!=1)
        {
            ans++;
        }
    }
    
    cout<<ans<<endl;

    return 0;
}
