
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,mini,maxi,c=0;
    cin>>n;
    vector<int>a;
    for(auto i=0;i<n;i++)
    {
        int ins;
        cin>>ins;
        a.push_back(ins);
    }
    maxi=a[0];
    mini=a[0];
    for(auto i=1;i<n;i++)
    {
        if(a[i]<mini||a[i]>maxi)
        {
            c++;
        }
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    
    cout<<c<<endl;
    return 0;
}
