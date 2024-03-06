#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x,j=0,maxi=0;
        cin>>n>>x;
        
        vector<int>a;
        
        for(auto i=0;i<n;i++)
        {
            int ins;
            cin>>ins;
            a.push_back(ins);
        }
        
        for(auto i=0;i<n;i++)
        {
            maxi=max(maxi,a[i]-j);
            j=a[i];
        }
        
        maxi=max(maxi,(2*(x-j)));
        
        cout<<maxi<<endl;
    }

    return 0;
}
