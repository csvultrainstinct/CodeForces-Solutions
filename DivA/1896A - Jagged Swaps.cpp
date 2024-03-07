#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,c=0;
        cin>>n;
        
        vector<int>a;
        
        for(auto i=0;i<n;i++)
        {
            int ins;
            cin>>ins;
            a.push_back(ins);
        }
        
        if(a[0]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
        
    

    return 0;
}
